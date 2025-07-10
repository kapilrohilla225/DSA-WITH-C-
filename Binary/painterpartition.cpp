#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int>&arr,int n,int m,int maxTimeAllowed){
    int painter = 1,timealot = 0;
    for(int i=0;i<n;i++){
    if(arr[i]>maxTimeAllowed){
        return false;
    }
    if(timealot + arr[i]<=maxTimeAllowed){
        timealot += arr[i];
    }
    else{
        painter++;
        timealot = arr[i];
    }
  }
  return m<painter ? false:true;
}

int painterPartition(vector<int>&arr,int n,int m){
    if(n<m){
        return -1;
    }
    int s = 0,sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int e = sum,ans = 0;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(isValid(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40,30,10,20};
    int n = arr.size() , m = 2;
    int result = painterPartition(arr,n,m);
    cout<<"Min Time Of Alloted To A Painter : "<<result;

   return 0;
}