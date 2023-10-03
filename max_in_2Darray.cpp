//Q4: Write a C++ program to find the largest element of a given 2D array of integers.
// Input 1:
// 1 3 4 6
// 2 4 5 7
// 3 5 6 8
// 4 6 7 9
// Output 1: 9

#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[3][3] = {{1,9,3},{2,1,4},{3,4,1}};
    int max = INT_MIN;
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            if(array[i][j]>max){
                max = array[i][j];
            }
        }
    }
    cout<<max;
}