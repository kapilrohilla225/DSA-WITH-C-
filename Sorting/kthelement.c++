#include<bits/stdc++.h>
using namespace std;

vector<int> kthSort(vector<int>arr){
    int n = arr.size();
    int count = 0;
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
        count++;
    }
    return arr;
}

int main()
{
    vector<int>arr = {13,10,9,8,15};
    int k = 3;//third position element
    cout<<"Sorted Array : " ;
    vector<int> result = kthSort(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    cout<<"Kth smallest Element Of Array : "<<result[k-1]<<endl;

   return 0;
}