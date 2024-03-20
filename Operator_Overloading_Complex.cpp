//
// Created by Ankit Sahu on 3/19/24.
//
#include <iostream>

using namespace std;

class Complex{
    int r, i;
public:

    Complex(int real, int imaginary){
        this->r = real;
        this->i = imaginary;
    }

    Complex operator+ (const Complex &c){ // copy constructor
        return Complex(this->i + c.i, this->r+c.r );
    }

    Complex operator- (const Complex &c){ // copy constructor
        return Complex(this->r - c.r, this->i - c.i);
    }

    void print(){
        cout<<this->r<< " + "<< this->i<<"i"<<endl;
    }
};

int main(){
    Complex c1(2, 3);
    Complex c2(3, 2);
    c1.print();
    c2.print();

    Complex c3 = c1+ c2;
    Complex c4 = Complex(20, 20) - c3;

    c3.print();
    c4.print();
}