#include<bits/stdc++.h>
#include<limits>
using namespace std;
//Need to Remember how code execution row wise and column wise
int max_value = INT_MIN;//global variable

void maxSum(int sum){
    if(sum>max_value){
        max_value = sum;
    }
}

void rowSum(int arr[2][2],int n,int m){
    for(int j=0;j<m;j++){
        int sum = 0;
    for(int i=0;i<n;i++){
            sum += arr[j][i]; 
        }
        cout<<"Sum of "<<j<<" Column is : "<<sum;
        cout<<endl;
        maxSum(sum);
    }
    cout<<"Max Sum Is : "<<max_value<<endl;
}   


int main()
{
    int n = 2,m = 2;
    int arr[2][2] = {1,2,3,4};
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";//column wise
            // cout<<arr[i][j]<<" ";//   row wise
        }
        cout<<endl;
    }

    rowSum(arr,n,m); //row sum of each Array row
    return 0;
}