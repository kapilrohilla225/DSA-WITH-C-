#include<bits/stdc++.h>
using namespace std ;

int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    // int mid = (start+end)/2;
    // for better and remove error int limit use
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

int main()
{
    int even[] = {4,6,8,10,12,14};
    int odd[] = {5,10,15,17,20};

    int index = binarysearch(even,6,14);
    int index2 = binarysearch(odd,5,17);
    cout<<"Index Of key value Even : "<<index<<endl;
    cout<<"Index Of key value Odd : "<<index2<<endl;
    return 0;
}