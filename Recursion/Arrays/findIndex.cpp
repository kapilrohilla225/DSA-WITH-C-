#include<bits/stdc++.h>
using namespace std;

int findIndex(int arr[],int s,int e,int target){
    //if not found 
     if(s>e){
       return -1;
    }
    int mid = s + (e-s)/2;
    //if found 
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        findIndex(arr,mid+1,e,target);
    }
    else{
        findIndex(arr,s,mid-1,target);
    }       
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int e = 4,s = 0;
    int target = 5;
    int ans = findIndex(arr,s,e,target);
    if(ans == -1){
        cout<<"Element Not Found ";
    }
    else{
        cout<<"Element Found at Index : "<<ans;
    }
    return 0;
}