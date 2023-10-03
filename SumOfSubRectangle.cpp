//Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from (l1,r1) to (l2, r2).

// Input 1:
// 1 2 -3 4
// 0 0 -4 2
// 1 -1 2 3
// -4 -5 -7 0
// l1 = 1, r1 = 2 , l2 = 3 , r2 = 3
// Output 1: -4

// Input 2:
// 1 2 -3 4
// 0 0 -4 2
// 1 -1 2 3
// -4 -5 -7 0
// l1 = 1, r1 = 0 , l2 = 0 , r2 = 3
// Output 1: 2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int array2[4][4] = {1,2,-3,4,0,0,-4,2,1,-1,2,3,-4,-5,-7,0};
    int l1,r1,l2,r2;
    cout<<" Enter two cordinates";
    cin>>l1>>r1>>l2>>r2;
    int sum = array2[l1][r1] + array2[l2][r2];
    cout<<sum;
}