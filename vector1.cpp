//
// Created by Ankit Sahu on 9/3/23.
//

#include<iostream>
#include<vector>

int main() {
    int m=3,n=5;
//    vector<vector<int> >  dp(m, vector<int>(n, -1));
    std::vector<int> dp1(m);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            std::cout<<dp1[i]<< " ";
        }
        std::cout<<std::endl;
    }
    return 0;
}