//
// Created by Ankit Sahu on 8/13/23.
//

#include<bits/stdc++.h>

using namespace std;

int x;

class Geeks{
    static int value;

public:
    ~Geeks(){
        cout<<"\nthe end";
    }

    void print(){
        cout<<value;
    }
};

int Geeks::value = 2;

int main(){

    int x = 9;

    cout<<"Value of global x is "<<::x<<endl;
    cout<<"Value of local x is "<<x<<endl;

    Geeks g;

    g.print();
    return 0;
}