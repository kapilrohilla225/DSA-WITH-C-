#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int>arr){
    int n = arr.size();
    for(int i = 1;i<n;i++){
        int temp = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    return arr;
}


int main()
{
    vector<int>arr = {10,1,7,4,8,2,11};
    int n = arr.size();
    cout<<"Sorted Array : "<<endl;
    vector<int>result = insertionSort(arr); 
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
   return 0;
}