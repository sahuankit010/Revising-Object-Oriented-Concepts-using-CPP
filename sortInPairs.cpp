//
// Created by Ankit Sahu on 5/31/23.
//

#include<bits/stdc++.h>

using namespace std;

bool compDesc(pair<int, int> p1, pair<int, int> p2){

    return (p1.first >= p2.first);
}

int main(){

    vector<pair<int, int> > vec;

    vec.push_back(make_pair(1,2));
    vec.push_back(make_pair(5, 5));
    vec.push_back(make_pair(3,2));
    vec.push_back(make_pair(143, 43));
    vec.push_back(make_pair(45,2));

    cout<<"Original Vector:\n";
    for(pair<int, int> p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

    sort(begin(vec), end(vec));

    cout<<"After sorting:\n";
    for(pair<int, int> p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

    sort(begin(vec), end(vec), compDesc);

    cout<<"After desc sorting:\n";
    for(pair<int, int> p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}