#include<bits/stdc++.h>
using namespace std;
//arr[0] technique and arr push and size decrease technique measurly uses to solve these type of questions
bool checkElement(int arr[],int size,int target){
    if(size == 0){
        return false;
    }
    if(arr[0] == target){
        return true;
    }
    else{
        checkElement(arr+1,size-1,target);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int target = 5;
    bool ans = checkElement(arr,size,target);
    if(ans){
        cout<<"Element Found ";
    }
    else{
        cout<<"Element Not Found";
    }
    return 0;
}