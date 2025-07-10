#include<bits/stdc++.h>
using namespace std;

void spiralPrint(vector<vector<int>>arr,int row,int col){
    //index where all  values are lies
    int nrow = row-1;
    int ncol = col-1;
    int startingRow = 0;
    int startingCol = 0;
    int total = row*col;
    int count = 0;
    vector<int> ans;
    while(count < total){
        //print starting row
        for(int index = startingCol;index<=ncol && count<total;index++){
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;
        for(int index = startingRow;index<=nrow && count<total;index++){
            ans.push_back(arr[index][ncol]);
            count++;
        }
        ncol--;
        for(int index = ncol;index>=startingCol && count<total;index--){
            ans.push_back(arr[nrow][index]);
            count++;
        }
        nrow--;
        for(int index = nrow;index>=startingRow && count<total;index--){
            ans.push_back(arr[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = arr.size();
    int col = arr[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " "; //   row wise
        }
        cout << endl;
    }
    
    cout<<"Spiral print : "<<endl;

    spiralPrint(arr,row,col);

    return 0;
}