//
// Created by Ankit Sahu on 8/27/23.
//


#include<bits/stdc++.h>

using namespace std;

int main(){

    multiset<char> set;

    set.insert('a');
    set.insert('a');
    set.insert('a');
    set.insert('b');
    set.insert('b');
    set.insert('b');
    set.insert('c');
    set.insert('c');
    set.insert('c');

    for(char c: set) {
        cout<<c<<" ";
    }

    cout<<endl;

    multiset<char> ::iterator it1 = set.lower_bound('b');

    cout<<*it1<<endl;

    multiset<char> ::iterator it2 = set.upper_bound('b');

    cout<<*it2<<endl;

    return 0;
}