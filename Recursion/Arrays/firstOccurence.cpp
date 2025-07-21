#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[],int s,int e,int target){
    int ans = 0;
    //base case
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    //if found
    if(arr[mid] == target){
        int leftSearch = firstOccurence(arr,s,mid-1,target);
        return (leftSearch != -1) ?  leftSearch : mid;
    }
    else if(arr[mid]>target){
        return firstOccurence(arr,s,mid-1,target);
    }
    else{
        return firstOccurence(arr,mid+1,e,target);
    }
    return ans;
}

int main()
{
    int arr[5] = {1,3,3,4,5};
    int e = 4,s = 0;
    int target = 3;
    int ans = firstOccurence(arr,s,e,target);
    if(ans == -1){
        cout<<"Element Not Found ";
    }
    else{
        cout<<"Element Found at Index : "<<ans;
    }
    return 0;
}