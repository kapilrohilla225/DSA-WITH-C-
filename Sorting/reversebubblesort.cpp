//reverse bubble sort
#include<bits/stdc++.h>
using namespace std;
vector<int> bubbleSort(vector<int> arr){
    bool swaped = false;
    int n = arr.size();
    for(int i=1;i<n;i++){
        
        for(int j=0;j<n-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped = true;
            }
        }
        // if(swaped == true){
        //     break;
        // }
    }
    return arr;
}

int main()
{
    vector<int>arr = {5,2,3,4,8};
    int n = arr.size();
    vector<int>result = bubbleSort(arr);
    cout<<"Sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
   return 0;
}