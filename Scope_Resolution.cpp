//
// Created by Ankit Sahu on 3/18/24.
//

#include<iostream>

using namespace std;

int global_Var = 42;

// function to change pointer value
void changePointerValue(int** pp){
    *pp = &global_Var;
}

int main(){
    int var = 23;
    int* ptr_to_var = &var;

    cout << "Passing Pointer to function:" << endl;

    cout << "Before :" << *ptr_to_var << endl; // display 23

    changePointerValue(&ptr_to_var);

    cout << "After :" << *ptr_to_var << endl; // display 23

    int *p = new int(2);

    int *q = new int[5];

    q[0] = 1;
    q[2] = 4;

    cout<<*p<<endl;

    for(int i=0; i<5; i++){
        cout<<*(q+i)<<" ";
    }
    cout<<endl;

    delete p;
    delete q;
    return 0;
}