#include<bits/stdc++.h>
using namespace std;

//[1,3,5,9]  k = 2 with 2 places => [5 ,9 ,1 ,3];   //2 places move forward 
//mod use %n

  vector<int> reverseArray(vector<int>arr,int k){
    vector<int> temp(arr.size());
    int n = arr.size();
    for(int i=0;i<n;i++){
        temp[(i+k)%n] = arr[i];
    }
    arr = temp;
    return arr;
 }
int main()
{
    vector<int>arr = {1,2,3,4};

    vector<int>result = reverseArray(arr,3);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
   return 0;
}