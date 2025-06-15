#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int>& arr, int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;
    
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1; // keep searching on the left
        } else if(arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int lastOccurrence(vector<int>& arr, int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;
    
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1; // keep searching on the right
        } else if(arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = firstOccurrence(arr, n, k);
    int last = lastOccurrence(arr, n, k);
    int Total = last - first + 1; 
    cout<<"Total Occurance Of Array : "<<Total;
}

int main(){
    vector<int>arr;
    arr = {1,2,3,3,3,4,5};
    firstAndLastPosition(arr,7,3);
}


