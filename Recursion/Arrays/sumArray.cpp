#include<bits/stdc++.h>
using namespace std;

int printSum(int arr[],int size){
    if(size == 0){
        return 0;
    }
    int remaining = printSum(arr+1,size-1);
    int sum = arr[0] + remaining ;
    return sum;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int ans = printSum(arr,size); 
    cout<<"Sum is : "<<ans;
    return 0;
}