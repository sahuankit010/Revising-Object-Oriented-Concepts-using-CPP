#include <iostream>
#include<vector>

using namespace std;

vector<vector<int> > memo(101, vector<int>(101, -1));

int rec(int i, int j, int n){
    if(i == n-1 && j == n-1) return 1;

    if(i >= n || j >= n) return 0; // boundary condition for n-1 and n-1

    if(j>i) return 0;

    if(memo[i][j]!=-1) return memo[i][j];
    // diagonal condition
    return memo[i][j] = rec(i+1, j, n) + rec(i, j+1, n);
}

int numOfPathsToDest( int n)
{
    // your code goes here
    return rec(0, 0, n); // 0, 0, 4
}

int main() {
    cout<<numOfPathsToDest(17);
    return 0;
}