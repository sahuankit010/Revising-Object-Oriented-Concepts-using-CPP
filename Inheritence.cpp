//
// Created by Ankit Sahu on 3/19/24.
//

#include<iostream>

using namespace std;

class A{
    int a;

public:
    A(){
        a = 1;
    }
    virtual void show(){
        cout<<"Base Class "<<a<<endl;
    }
};

class B: public A{
    int b;
public:
    B(){
        b=2;
    }
    void show(){
        cout<< "Derived Class "<< b<< endl;
    }
};

int main(){

    A* a;
    B b;
    a = &b;
    a->A::show(); // call base class show
    a->show();//call derived class show
};
