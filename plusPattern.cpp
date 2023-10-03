// Q6: Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
// Input 1:
// 1 2 3 4 5
// 3 4 5 6 7
// 7 6 5 4 3
// 8 7 6 5 4
// 1 2 37 8 0
// Output 1:
//     3
//     5
// 7 6 5 4 3
//     6
//     37
#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[3][3] = {{1,2,3},{2,1,4},{3,4,1}};
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            if(i==1||j==1){
                cout<<array[i][j];
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    // for(int i = 0;i<3;i++){
    //     for(int j =0;j<3;j++){
    //         cout<<array[i][j]<<" ";
    //     }cout<<endl;
    // }
}
