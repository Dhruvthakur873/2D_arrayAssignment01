//Q1: Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[3][3] = {{1,2,3},{2,1,4},{3,4,1}};
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            array[i][j] = 10;
        }
    }
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<array[i][j]<<" ";
        }cout<<endl;
    }
}