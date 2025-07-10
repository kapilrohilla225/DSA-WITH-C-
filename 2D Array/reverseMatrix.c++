#include<bits/stdc++.h>
using namespace std;
//in place algorithm which have o(1) space comlexity and reduce memory storage operation are apply on same array

//key points (Approach) :- Transpose Matrix -> Reverse Each Row (In every case square Matrix or Rectangular)

void rotateMatrix(vector<vector<int>>arr){
    int row = arr.size();
    int col = arr[0].size();
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<row;i++){
        int st = 0;int end = col-1;
        while(st<end){
            swap(arr[i][st],arr[i][end]);
            st++;
            end--;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<vector<int>>arr = {{1,2,3},
                              {4,5,6},
                              {7,8,9}};

    rotateMatrix(arr);
    return 0;
}