// FILE: ex07-site_generator.cpp
#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
using namespace std;

class WebPage{
private:
  string name, title, description;
public:
  WebPage(string n, string t, string desc): name(n), title(t), description(desc){}
  string getName(){ return name; }
  string getTitle(){ return title; }
  string getDescription(){ return description; }
  
  friend ostream& operator<<(ostream& out, const WebPage& p){
    out <<  "<!doctype html>\n"
            "<html lang=\"en\">\n"
            "<head>\n"
            "  <meta charset=\"UTF-8\">\n"
            "  <meta name=\"viewport\"\n"
            "        content=\"initial-scale=1.0\">\n"
            "  <meta http-equiv=\"X-UA-Compatible\" content=\"ie=edge\">\n"
            "  <title>" + p.title + "</title>\n"
            "</head>\n"
            "<body>\n"
            "  <h1>" + p.title + "</h1>\n"
            "  <p>" + p.description + "</p>\n"
            "</body>\n"
            "</html>";
    
    return out;
  }
};

int main () {
  ifstream in("ex05-names.txt", ios::in);
  vector<WebPage> pages;
  string name, title, desc;
  while(true){
    cout << "Enter page name (-1 to terminate): " << endl;
    getline(cin, name);
    if(name == "-1") break;
    
    cout << "Enter page title: " << endl;
    getline(cin, title);
    
    cout << "Enter page description: " << endl;
    getline(cin, desc);
    
    pages.push_back(WebPage(name, title, desc));
  }
  
  for(int i = 0; i < pages.size(); i++){
    WebPage p = pages.at(i);
    ofstream out(p.getName() + ".html");
    out << p << endl;
    out.close();
  }
  
  return 0;
}

