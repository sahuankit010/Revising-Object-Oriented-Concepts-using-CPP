//
// Created by Ankit Sahu on 8/13/23.
//

#include<bits/stdc++.h>

using namespace std;

union UTD{
    int x;
    double y;

    char a[20];
};

int main(){
    UTD obj;

    strcpy(obj.a, "Ankit Sahu");
    obj.y = 123.0;
    obj.x  = 4;

    cout<<"a = "<<obj.a<< " "<<obj.x<<" "<<obj.y<<endl;

    return 0;
}