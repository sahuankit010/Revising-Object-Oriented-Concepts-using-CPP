//
// Created by Ankit Sahu on 3/20/24.
//
#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {3, 5, 9, 15, 27, 8};

    for(int i=0; i<6; i++){
        int rem = arr[i]%3;
        switch(rem){

            case 0:{
                cout<<arr[i] <<" is a multiple of 3\n";
                break;
            }
            default:{
                cout<<arr[i]<<" is not a multiple of 3.\n";
            }
        }
    }
    return 0;
}