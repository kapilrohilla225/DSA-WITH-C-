#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int n,int arr2[],int m,int arr3[]){
    int count = 0;
    int i=0;int j=0;
    while(i<n && j<m){
            if(arr[i]>arr2[j]){
                arr3[count++] = arr2[j++];
            }
            else{
                arr3[count++] = arr[i++];
            }
    }
    while(i<n){
        arr3[count++] = arr[i++];
    }
    while(j<m){
        arr3[count++] = arr[j++];
    }
}

void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    int arr[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,8};
    int arr3[8] = {0};

    merge(arr, 5, arr2, 3, arr3);

    print(arr3,8);

   return 0;
}