#include<iostream>
using namespace std;

bool SearchElement(int arr[][3],int target,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    const int n = 3,m = 3;
    int arr[n][m];
    int target = 5;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    bool result = SearchElement(arr, target, n, m);
    if(result){
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }
    return 0;
}