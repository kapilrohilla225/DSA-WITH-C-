#include<bits/stdc++.h>
using namespace std;

int lastOccurence(vector<int>arr,int target){
    int s = 0;
    int e = arr.size()-1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(target == arr[mid])
        {
            ans = mid;
            s = mid;
        }
        //Right wala part
        if(target>=arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int>arr = {4,4,3,4,4,6};
    int target = 4;
    int result = lastOccurence(arr,target);
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