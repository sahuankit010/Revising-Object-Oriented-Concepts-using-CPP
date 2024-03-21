//
// Created by Ankit Sahu on 3/19/24.
//

#include<iostream>

using namespace std;

typedef long long ll;

int factorial(int n,vector<int> &memo){
    if(n == 1) return 1;

    return n * factorial(n-1, memo);
}
ll fib(int n, vector<ll> &memo){
    if(n == 1 || n == 0 ) return 1;
    if(memo[n] != -1) return memo[n];
    else return memo[n] = fib(n-1, memo) + fib(n-2, memo);
}

string fizzBuzz(int n){
    if(n%3 == 0 && n%5 == 0) return "FizzBuzz";
    else if(n%5 == 0) return "Fizz";
    else if(n%3 == 0) return "Buzz";
    return "None";
}
int main(){

    int n = 6;
    vector<int> memo(n+1,-1);
    cout<<factorial(n, memo)<<endl;
    int ans = 1;
    for(int i=2; i<=n; i++){
        ans *= i;
    }

    cout<<ans<<endl;
    vector<ll> vec(1001,-1);
    cout<<fib(10, vec)<<endl;

    cout<<fizzBuzz(45);
    cout<<endl;
}