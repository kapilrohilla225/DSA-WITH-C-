#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n,int s,int e){
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(mid*mid == n){
        return mid;
    }
    else if((mid*mid) > n){
        return squareRoot(n,s,mid-1);
    }
    else{
        return squareRoot(n,mid+1,e);
    }
}

int main()
{
    int n;
    cout<<"Enter Number Which You are trying to find Square Root : ";
    cin>>n;
    int e = n,s = 0;
    int ans = squareRoot(n,s,e);
    if(ans == -1){
        cout<<"Not A Perfect Square";
    }
    else{
        cout<<"Perfect Square is : "<<ans;
    }
    return 0;
}