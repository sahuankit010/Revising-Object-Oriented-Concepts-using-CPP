//
// Created by Ankit Sahu on 3/18/24.
//

#include<iostream>
#include <string>

using namespace std;

template <typename T> T myMax(T a, T b){
    if(a>=b) return a;
    return b;
}

void fun(int arr[]){

    for(int i=0; i<4; i++){
        arr[i] = i*1;
    }
}

int main(){
//    cout<<myMax<int>(3,7);
//    cout<<endl;
//    cout<<myMax<char>('g', 'a');
//    cout<<endl;
//    cout<<myMax<float>(4.5f,5.5f);
//    cout<<endl;
////    cout<<myMax<string>("", "ankit");
//
//    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//    float *ptr1 = &arr[0];
//    float *ptr2 = ptr1 + 3;
//    cout<<ptr2<<endl;
//    cout<<ptr1<<endl;
//    printf("%f ", *ptr2);
//    printf("%d", ptr2 - ptr1);
//    cout<<endl;
    int arr1[4] = {10, 20 ,30, 40};
    fun(arr1);
    for(int i=0; i<4; i++){
        cout<<arr1[i]<< " ";
    }
    return 0;
    return 0;
}
