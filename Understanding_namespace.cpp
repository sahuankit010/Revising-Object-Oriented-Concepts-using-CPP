//
// Created by Ankit Sahu on 3/16/24.
//

#include <iostream>
using namespace  std;
namespace n1{
    int a = 4;

    void fun1(){
        std::cout<<a<<endl;
    }
}

namespace n2{
    int b = 5;
    int fun2(){
        return b;
    }
}
using namespace n2;
int main(){

    cout<<n1::a<<endl;
    n1::fun1();

    cout<<fun2()<<endl;
}