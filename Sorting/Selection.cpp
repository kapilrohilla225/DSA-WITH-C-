#include<bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int>&arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    return arr;
}

int main()
{
    vector<int>arr = {64, 25, 12, 22, 11,13 ,15 ,18 , 20 , 22 , 25, 30, 32, 35, 60, 65};
    vector<int>result = selectionSort(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
   return 0;
}