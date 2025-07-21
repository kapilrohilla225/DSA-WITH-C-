#include<bits/stdc++.h>
using namespace std;

int checkElement(int arr[],int s,int e,int target){
    //base case -> element not found
    if(s<e){
        return 0;
    }
    int mid = s + (e-s)/2;
    //if element found

    if(arr[mid] == target){
        return 1;
    }

    if(arr[mid]<target){
        return checkElement(arr,mid+1,e,target);
    }
    else{
        return checkElement(arr,s,mid-1,target);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int e = 4,s=0;
    int target = 6;
    bool ans = checkElement(arr,s,e,target);
     if(ans){
        cout<<"Element Found ";
    }
    else{
        cout<<"Element Not Found";
    }
    return 0;
}