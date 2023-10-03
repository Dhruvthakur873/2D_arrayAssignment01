//Write a program to add two matrices and save the result in one of the given matrices.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Input 2:
// 4 5 8
// 0 0 8
// 1 2 0
// Output 1:
// 5 7 11
// 4 5 14
// 8 10 9
#include<bits/stdc++.h>
using namespace std;
int main(){
    int array1[3][3] = {1,2,3,4,5,6,7,8,9};
    int array2[3][3] = {4,5,8,0,0,8,1,2,0};
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            array1[i][j] += array2[i][j];
        }
    }
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<array1[i][j]<<" ";
        }cout<<endl;
    }
}