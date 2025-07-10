#include<bits/stdc++.h>
using namespace std;

int pivotElement(vector<int>arr,int target)
{
    int s = 0;
    int e = arr.size()-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        //left half
        if(arr[s]<=arr[mid])
        {
            if(target>=arr[s] && target<=arr[mid])
            {
                e = mid -1;
            }
            else
            {
                s = mid + 1;
            }
        }
        //Right Half Part 
        else
        {
            if(arr[mid]<=target && target<=arr[e])
            {
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int>arr = {5,6,7,0,1,2,3,4};
    int target = 3;
    int result = pivotElement(arr,target);
    cout<<"Index : "<<result;
    return 0;
}