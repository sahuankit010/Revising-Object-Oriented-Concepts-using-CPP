//
// Created by Ankit Sahu on 5/29/23.
//

// C++ program to demonstrate function
// declaration outside class

#include <bits/stdc++.h>

using namespace std;

class Geeks {
private:
    string geekname;
    int id;
public:
    Geeks() {
        cout << "Default Constructor called" << endl;
        id = -1;
    }

    //Parameterized Constructor
    Geeks(int x) {
        cout << "Parameterized Constructor called " << endl;
        id = x;
    }

    ~Geeks()
    {
        cout << "Destructor called for id: " << id <<endl;
    }

    // printname is not defined inside class definition
    void setName(string name) {
        this->geekname = name;
    }

    void setId(int id) {
        this->id = id;
    }

    void printname();

    // printid is defined inside class definition
    void printid() {
        cout << "Geek id is: " << id << endl;
    }
};

// Definition of printname using scope resolution operator ::
void Geeks::printname() {
    cout << "Geekname is: " << geekname;
}

int main() {

    Geeks obj1;
    obj1.setName("XYZ");
    obj1.setId(15);

    // call printname()
    obj1.printname();
    cout << endl;

    // call printid()
    obj1.printid();
    return 0;
}
