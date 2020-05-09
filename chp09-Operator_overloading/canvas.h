#ifndef _HTML5_CANVAS_H_
#define _HTML5_CANVAS_H_

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>

namespace canvas {
  const double PI = 3.14159265359;

  struct Color {
    double r, g, b;
  public:
    Color() : r(0.0), g(0.0), b(0.0) {}
    Color(double r, double g, double b) : r(r), g(g), b(b) {}
    Color(int r, int g, int b) : r(r / 255.0), g(g / 255.0), b(b / 255.0) {}

    std::string toHex() const {
      std::stringstream sout;
      sout << "#" << std::setfill('0')
           << std::setw(2) << std::hex << static_cast<int>(r * 255)
           << std::setw(2) << std::hex << static_cast<int>(g * 255)
           << std::setw(2) << std::hex << static_cast<int>(b * 255);
      return sout.str();
    }

    ~Color() {}
  };

  struct Font {
    std::string family;
    int size;
  };

  struct Colors {
    static const Color red, green, blue;
  };

  const Color Colors::red = Color(1.0, 0.0, 0.0);
  const Color Colors::green = Color(0.0, 1.0, 0.0);
  const Color Colors::blue = Color(0.0, 0.0, 1.0);

  std::string operator+(const std::string lhs, const Color& c){
    return lhs + c.toHex();
  }

  class Base {
  protected:
    int width;
    int height;
  public:
    Base(int w, int h) : width(w), height(h) {}

    virtual void clear() = 0;

    virtual void strokePoint(int x, int y) { strokeRect(x, y, 1, 1); }
    virtual void strokeLine(int x1, int y1, int x2, int y2) = 0;
    virtual void strokeRect(int x, int y, int w, int h) = 0;
    virtual void fillRect(int x, int y, int w, int h) = 0;
    virtual void strokeText(const std::string& text, int x, int y) = 0;
    virtual void fillText(const std::string& text, int x, int y) = 0;
    virtual void strokeCircle(int cx, int cy, int r) = 0;
    virtual void fillCircle(int cx, int cy, int r) = 0;

    virtual void draw() = 0;
    virtual void draw(std::ostream&) = 0;

    virtual ~Base() {}
  };

  class GraphicalBase : public Base {
  protected:
    std::vector<std::string> graph;
    Color fill, stroke;
    Font font;
    int strokeWidth;

  public:
    GraphicalBase(int w, int h) : Base(w, h), strokeWidth(1) {}
    GraphicalBase(int w, int h, int lw) : Base(w, h), strokeWidth(lw) {}
    void clear() {
      graph.clear();
    }

    virtual void setStrokeColor(const Color& c) { stroke = c; }
    virtual void setFillColor(const Color& c) { fill = c; }
    virtual void setFont(const std::string& family, int size) {
      font.family = family;
      font.size = size;
    }
    virtual void setStrokeWidth(int sw) { strokeWidth = sw; }

    virtual ~GraphicalBase() {}
  };

  class Text : public Base{
  private:
    const char paintChar;
    char* grid;

    void init(){
      grid = new char[height * (width + 1)];
      clear();
    }

    int max(int m, int n){ return m > n ? m : n; };

  public:
    Text(): Base(80, 40), paintChar('*'){ init(); }
    Text(int w, int h, char c): Base(w, h), paintChar(c) { init(); }

    void clear (){
      for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
          grid[i * (width + 1) + j] = ' ';
        }
        grid[i * (width + 1) + width] = '\n';
      }
      grid[(height-1) * (width + 1) + width] = '\0';
    }

    void strokePoint(int x, int y){
      if(x >= 0 && x < width && y >= 0 && y < height){
        grid[y * (width + 1) + x] = paintChar;
      }
    }

    void strokeLine(int x1, int y1, int x2, int y2){
      strokePoint(x1, y1);
      strokePoint(x2, y2);
      int px, py;
      int w = max(abs(x2 - x1), abs(y2 - y1));

      for(int i = 0; i < w; i++){
        px = x1 + (i * 1.0)/w * (x2 - x1);
        py = y1 + (i * 1.0)/w * (y2 - y1);
        strokePoint(px, py);
      }
    }

    void strokeRect(int x, int y, int w, int h){
      strokeLine(x, y, x, y + h);
      strokeLine(x, y, x + w, y);
      strokeLine(x + w, y, x + w, y + h);
      strokeLine(x, y + h, x + w, y + h);
    }

    void strokeCircle(int cx, int cy, int r){
      const int POINTS = 20;
      int x, y;
      for(int i = 0; i < POINTS; i++){
        x = cx + static_cast<int>(r * cos(canvas::PI * 2 / POINTS * i));
        y = cy + static_cast<int>(r / 2 * sin(canvas::PI * 2 / POINTS * i));
        strokePoint(x, y);
      }
    }

    void fillRect(int x, int y, int w, int h){
      for(int i = y; i < y + h; i++){
        for(int j = x; j < x + w; j++){
          grid[i * (width + 1) + j] = paintChar;
        }
      }
    }

    void fillCircle(int cx, int cy, int r){
      std::cerr << "Not supported operation!" << std::endl;
    }

    void strokeText(const std::string& text, int x, int y){
      std::cerr << "Not supported operation!" << std::endl;
    }

    void fillText(const std::string& text, int x, int y){
      std::cerr << "Not supported operation!" << std::endl;
    }

    void draw (){
      draw(std::cout);
    }

    void draw (std::ostream& out){
      out << std::endl << grid << std::endl;
    }

    ~Text(){
      delete[] grid;
    }
  };

  class HTML5 : public GraphicalBase {
  private:
    const std::string CODE_INDENTATION;
  public:
    HTML5(int w, int h) : GraphicalBase(w, h), CODE_INDENTATION("\n          ") {}
    HTML5(int w, int h, int lw) : GraphicalBase(w, h, lw), CODE_INDENTATION("\n          ") {}

    void setStrokeColor(const Color& c){
      graph.push_back(CODE_INDENTATION + "ctx.strokeStyle = '" + c + "';");
    }

    void setFillColor(const Color& c){
      graph.push_back(CODE_INDENTATION + "ctx.fillStyle = '" + c + "';");
    }

    void setFont(const std::string& family, int size){
      graph.push_back(CODE_INDENTATION + "ctx.font = '" + std::to_string(size) + "px " + family + "';");
    }

    void setStrokeWidth(int sw){
      graph.push_back(CODE_INDENTATION + "ctx.lineWidth = " + std::to_string(sw) + ";");
    }

    void strokeLine(int x1, int y1, int x2, int y2) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "ctx.beginPath();"
           << CODE_INDENTATION
           << "ctx.moveTo(" << x1 << ", " << y1 << ");"
           << CODE_INDENTATION
           << "ctx.lineTo(" << x2 << ", " << y2 << ");"
           << CODE_INDENTATION
           << "ctx.closePath();"
           << CODE_INDENTATION
           << "ctx.stroke();";
      graph.push_back(sout.str());
    }

    void strokeRect(int x, int y, int w, int h) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "ctx.strokeRect(" << x << ", " << y << ", " << w << ", " << h << ");";
      graph.push_back(sout.str());
    }

    void fillRect(int x, int y, int w, int h) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "ctx.fillRect(" << x << ", " << y << ", " << w << ", " << h << ");";
      graph.push_back(sout.str());
    }

    void strokeText(const std::string& text, int x, int y) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "ctx.strokeText('" << text << "', " << x << ", " << y << ");";
      graph.push_back(sout.str());
    }

    void fillText(const std::string& text, int x, int y) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "ctx.fillText('" << text << "', " << x << ", " << y << ");";
      graph.push_back(sout.str());
    }

    void strokeCircle(int cx, int cy, int r) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "ctx.beginPath();"
           << CODE_INDENTATION
           << "ctx.arc(" << cx << ", " << cy << ", " << r << ", 0, Math.PI * 2, true);"
           << CODE_INDENTATION
           << "ctx.stroke();";
      graph.push_back(sout.str());
    }

    void fillCircle(int cx, int cy, int r) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "ctx.beginPath();"
           << CODE_INDENTATION
           << "ctx.arc(" << cx << ", " << cy << ", " << r << ", 0, Math.PI * 2, true);"
           << CODE_INDENTATION
           << "ctx.fill();";
      graph.push_back(sout.str());
    }

    void draw() {
      std::ofstream out("canvas.html");
      draw(out);
      out.close();
    }

    void draw(std::ostream& out) {
      out << "<!DOCTYPE html>\n"
          << "<html>\n"
          << "  <head>\n"
          << "    <meta charset=\"utf-8\"/>\n"
          << "    <title>An simple canvas</title>\n"
          << "    <script type=\"text/javascript\">\n"
          << "      function draw() {\n"
          << "        var canvas = document.getElementById('CPPBasedCanvas');\n"
          << "        if (canvas.getContext) {\n"
          << "          var ctx = canvas.getContext('2d');\n";

      for (std::vector<std::string>::iterator it = graph.begin(); it != graph.end(); ++it) {
        out << *it;
      }

      out << std::endl
          << "        }\n"
          << "      }\n"
          << "    </script>\n"
          << "    <style type=\"text/css\"> canvas { border: 1px solid #ccc; } </style>\n"
          << "  </head>\n"
          << "  <body onload=\"draw();\">"
          << "    <canvas id=\"CPPBasedCanvas\" width=\"" << width << "\" height=\"" << height << "\"></canvas>\n"
          << "  </body>\n"
          << "</html>\n";
    }
  };

  class SVG : public GraphicalBase {
  private:
    const std::string CODE_INDENTATION;
  public:
    SVG(int w, int h) : GraphicalBase(w, h), CODE_INDENTATION("\n  ") {}
    SVG(int w, int h, int lw) : GraphicalBase(w, h, lw), CODE_INDENTATION("\n  ") {}

    void strokeLine(int x1, int y1, int x2, int y2) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "<line x1=\"" << x1
           << "\" y1=\"" << y1
           << "\" x2=\"" << x2
           << "\" y2=\"" << y2
           << "\" stroke=\"" + stroke
           << "\" stroke-width=\"" << strokeWidth << "\"/>";
      graph.push_back(sout.str());
    }

    void strokeRect(int x, int y, int w, int h) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "<rect x=\"" << x
           << "\" y=\"" << y
           << "\" width=\"" << w
           << "\" height=\"" << h
           << "\" stroke=\"" + stroke
           << "\" fill=\"transparent"
           << "\" stroke-width=\"" << strokeWidth << "\"/>";
      graph.push_back(sout.str());
    }

    void fillRect(int x, int y, int w, int h) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "<rect x=\"" << x
           << "\" y=\"" << y
           << "\" width=\"" << w
           << "\" height=\"" << h
           << "\" fill=\"" + fill
           << "\" stroke=\"transparent\"/>";
      graph.push_back(sout.str());
    }

    void strokeText(const std::string& text, int x, int y) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "<text x=\"" << x
           << "\" y=\"" << y
           << "\" stroke=\"" + stroke
           << "\" stroke-width=\"" << strokeWidth
           << "\" fill=\"transparent"
           << "\" font-family=\"" << font.family
           << "\" font-size=\"" << font.size
           << "\">" << text << "</text>";
      graph.push_back(sout.str());
    }

    void fillText(const std::string& text, int x, int y) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "<text x=\"" << x
           << "\" y=\"" << y
           << "\" fill=\"" + fill
           << "\" stroke=\"transparent" + stroke
           << "\" font-family=\"" << font.family
           << "\" font-size=\"" << font.size
           << "\">" << text << "</text>";
      graph.push_back(sout.str());
    }

    void strokeCircle(int cx, int cy, int r) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "<circle cx=\"" << cx
           << "\" cy=\"" << cy
           << "\" r=\"" << r
           << "\" stroke=\"" + stroke
           << "\" fill=\"transparent"
           << "\" stroke-width=\"" << strokeWidth << "\"/>";
      graph.push_back(sout.str());
    }

    void fillCircle(int cx, int cy, int r) {
      std::stringstream sout;
      sout << CODE_INDENTATION
           << "<rect cx=\"" << cx
           << "\" cy=\"" << cy
           << "\" r=\"" << r
           << "\" fill=\"" + fill
           << "\" stroke=\"transparent\"/>";
      graph.push_back(sout.str());
    }

    void draw() {
      std::ofstream out("canvas.svg");
      draw(out);
      out.close();
    }

    void draw(std::ostream& out) {
      out << "<?xml version=\"1.0\" standalone=\"no\"?>\n"
          << "<svg width=\"" << width
          << "\" height=\"" << height
          << "\" version=\"1.1\" xmlns=\"http://www.w3.org/2000/svg\">";

      for (std::vector<std::string>::iterator it = graph.begin(); it != graph.end(); ++it) {
        out << *it;
      }

      out << std::endl
          << "</svg>\n";
    }
  };
};

#endif
