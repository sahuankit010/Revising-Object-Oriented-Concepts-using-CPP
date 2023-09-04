//
// Created by Ankit Sahu on 9/3/23.
//

#include<bits/stdc++.h>

using namespace std;


int main() {
    int m=3,n=5;
    vector<vector<int> >  dp(m, vector<int>(n, -1));

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<dp[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}