#include<vector>
using namespace std;

int pivot_element(vector<int>&arr,int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }   
    return start;
}

int binary_search(vector<int>&arr,int s,int e, int key){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        //right wala path
        if(arr[mid]<key){
            start = mid + 1;
        }
        //left wala path
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int search(vector<int>arr,int size,int k){
    int pivot = pivot_element(arr,size);
    if(k>=arr[pivot] && k<=arr[size-1]){
        return binary_search(arr,pivot,size-1,k);
    }
    else{
        return binary_search(arr,0,pivot-1,k);
    }
}