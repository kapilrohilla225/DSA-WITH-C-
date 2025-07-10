#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int>arr,int target){
    int s = 0;
    int e = arr.size()-1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(target == arr[mid])
        {
            ans = mid;
            e = mid;
        }
        if(target<=arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}


int main()
{
    vector<int>arr = {4,4,3,4,4,6,7};
    int target = 4;
    int result = firstOccurence(arr,target);
    if(result == -1)
    {
        cout<<"Target Element Not Found !";
    }
    else
    {
    cout << "Index of Target Element is " << result;
    }
   return 0;
}