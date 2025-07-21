#include<bits/stdc++.h>
using namespace std;

int pivotElement(int arr[],int s,int e,int target){
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == target){
        return mid;
    }
    if(arr[s]<=arr[mid]){
        if(arr[s] <= target && target < arr[mid]){
            return pivotElement(arr,s,mid-1,target);
        }       
        else{
            return pivotElement(arr,mid+1,e,target);
        }
    }
    else{
        if(arr[mid] < target && target <= arr[e]){
            return pivotElement(arr,mid+1,e,target);
        }
        else{
            return pivotElement(arr,s,mid-1,target);
        }
    }
}

int main()
{
    int arr[] = {4, 5, 6, 7, 1, 2, 3};
    int s = 0,e = sizeof(arr)/sizeof(arr[0])-1;
    int target = 3;
    int ans =  pivotElement(arr,s,e,target);
    if(ans == -1){
        cout<<"Element Not Found";
    }
    else{
        cout<<"Element Index is : "<<ans;
    }
    return 0;
}