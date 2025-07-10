#include<bits/stdc++.h>
using namespace std;

bool findElement(vector<vector<int>>arr,int target){
    int row = arr.size();
    int col = arr[0].size();
    int st = 0;
    int end = row*col-1;

    int mid = st+(end-st)/2;

    while(st<=end){
        int element = arr[mid/col][mid%col];

        if(element == target){
            return 1;
        }
        if(element < target){
            st =  mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = st+(end-st)/2;
    }
    return 0;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 10;
    bool check_element = findElement(arr,target);
    if(check_element == 1){
        cout<<"Element found";
    }
    else{
        cout<<"Element Not found";
    }
    return 0;
}