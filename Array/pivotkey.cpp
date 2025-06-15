#include<bits/stdc++.h>
 
using namespace std ;

    int pivot_element(int arr[],int size,int key){
        int start = 0;
        int end = size - 1;
        int mid = start + (end - start)/2;

        while(start<end){
            if(arr[mid]>arr[0]){
                start = mid + 1;
            }
            else{
                end = mid;
            }
            mid = start + (end - start)/2;
        }   
        return start;
    }

int main()
{
    int arr[] = {7,8,9,10,1,2};
    int ans = pivot_element(arr,6,3);
    cout<<"Pivot Element : "<<ans<<endl;
    cout<<"Element : "<<arr[ans];
    return 0;
}