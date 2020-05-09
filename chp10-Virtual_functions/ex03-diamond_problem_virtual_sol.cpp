// FILE: ex03-diamond_problem_virtual_sol.cpp
#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
    void foo(){}
};

class Child1 : virtual public Parent {
public:
    void bar(){}
};

class Child2 : virtual public Parent {};
class GrandChild : public Child1, public Child2 {};

int main(){
    GrandChild d;

    d.foo();

    return 0;
}

