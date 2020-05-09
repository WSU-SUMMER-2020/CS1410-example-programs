// FILE: ex02-diamond_problem_nonvirtual_sol.cpp
#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
    void foo(){}
};

class Child1 : public Parent {
public:
    void bar(){}
};

class Child2 : public Parent {};
class GrandChild : public Child1, public Child2 {};

int main(){
    GrandChild d;

    d.Child2::foo();

    return 0;
}

