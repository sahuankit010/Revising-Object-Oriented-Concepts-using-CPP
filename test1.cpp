//
// Created by Ankit Sahu on 6/24/23.
//
#include<iostream>

using namespace  std;

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void swap1(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int x = 5;

    int *p = new int(x);

//    cout<<*p<<endl;

    int a = 5, b = 9;

    // swapping using pointers
    swap(&a, &b);

//    cout<<a<<" "<<b<<endl;

    a = 5, b = 9;

    // swapping using reference
    swap1(a, b);

//    cout<<a<<" "<<b<<endl;

    int arr[] = {1, 2, 3, 4, 5};

    int *p1 = &arr[0];
    cout<<p1<<endl;
    p1 = p1+1;
    cout<<p1<<endl;


    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;


    int originalVariable = 12;
// A reference variable to originalVariable
    int& referenceVariable = originalVariable;

    cout<<referenceVariable<<endl;
    referenceVariable = 14;

    cout<<referenceVariable<<endl;
    cout<<originalVariable<<endl;

    originalVariable = 15;

    cout<<referenceVariable<<endl;

}