#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>arr,int N,int C,int minAllowedDistance){
    int cows = 1,lastStallPos = arr[0];

    for(int i=1;i<N;i++){
        if(arr[i]-lastStallPos >= minAllowedDistance){
            cows++;
            lastStallPos = arr[i];
        }

        if(cows == C){
            return true;
        }
    }
    return false;
}

int getDistance(vector<int>&arr,int N,int C){
    sort(arr.begin(),arr.end());
    //st = 1, end = maxval -minval
    
    int s = 1,e = arr[N-1]-arr[0];
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        //right side
        if(isPossible(arr,N,C,mid)){
            ans = mid;
            s = mid + 1;
        }
        //left
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int N = 5,C = 3;
    vector<int> arr = {1,2,8,4,9};

    cout<< getDistance(arr,N,C)<<endl;
   return 0;
}