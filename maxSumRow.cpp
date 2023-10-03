// Q5: Write a program to print the row number having the maximum sum in a given matrix.
// Input 1:
// 1 3 5 7
// 3 4 7 8
// 1 4 12 3
// Output 1: 2
// Explanation : The 2nd row has the maximum sum i.e. 3+4+7+8 = 20
#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[3][4] = {{1,3,5,7},{3,4,7,8},{1,4,12,3}};
    int rowSum = 0;
    int maxrowSum = INT_MIN;
    int maxRowNmber = -1;
    for(int i = 0;i<3;i++){
        int rowSum = 0;
        for(int j =0;j<4;j++){
            rowSum +=array[i][j];
        }
        if(maxrowSum<rowSum){
            maxrowSum = rowSum;
            maxRowNmber = i;
        }
    }cout<<maxrowSum <<" highest sum is of "<<maxRowNmber+1<<" row";
    // for(int i = 0;i<3;i++){
    //     for(int j =0;j<3;j++){
    //         cout<<array[i][j]<<" ";
    //     }cout<<endl;
    // }
}