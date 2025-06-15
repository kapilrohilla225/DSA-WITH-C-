#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int max = INT_MIN;
    cout<<"Enter Number Of Elements : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cout<<"Enter Number : ";
        cin>>num;
        if(num>max){
            max = num;
        }
    }
    cout<<"Max Number : "<<max;
}