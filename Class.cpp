/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class calculator{
    private:
    int a,b;
    public:
    calculator(int a, int b){
        this->a=a;
        this->b=b;
    }
    // public:
    int add(){
        return a+b;
    }
    int subtract(){
        return (a>b)? a-b : b-a;
    }
    int mul(){
        return a*b;
    }
    
    int remain(){
        return (a>b)? a%b : b%a;
    }
};
int main()
{
    cout<<"Hello World";
    cout<<endl;
    int a, b;
    cin>>a>>b;
    calculator c(a,b);
    cout<<c.add()<<endl;
    cout<<c.subtract()<<endl;
    cout<<c.mul()<<endl;
    cout<<c.remain();
    return 0;
}
