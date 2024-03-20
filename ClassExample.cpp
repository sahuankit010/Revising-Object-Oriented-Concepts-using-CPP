//
// Created by Ankit Sahu on 5/29/23.
//

// C++ program to demonstrate function
// declaration outside class

#include <iostream>
#include<vector>

using namespace std;

class Geeks {
private:

    string geekname;
    int id;
public:
    static int i;
    Geeks() {
        cout << "Default Constructor called" << endl;
        id = -1;
        i++;
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

int Geeks:: i = 1;

int main() {

    Geeks obj1;
    Geeks obj2;
    obj1.setName("XYZ");
    obj1.setId(15);

    // call printname()
    obj1.printname();
    cout << endl;
    cout<<"Static Values: ";
    cout<<obj1.i<<" "<<obj2.i<<endl;
    // call printid()
    obj1.printid();



    int x[] = {1, 2, 3, 5, 6, 7, 8, 9};
    cout<<sizeof (x)<<endl;
    cout<<sizeof (x[0])<<endl;
    int length = sizeof(x) / sizeof(x[0]);
    cout << "Length of the array is " <<
         length << endl;

    cerr << "Welcome to GfG! :: cerr";

    // This will print "Welcome to GfG"
    // in the output window
    cout << "Welcome to GfG! :: cout";
    return 0;
}
