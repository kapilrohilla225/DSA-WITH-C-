#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>arr,int target){
    int s = 0;
    int e = arr.size()-1;
    int ans = -1;
    while(s<e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            ans = mid;
            break;
        }
        else if(target < arr[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}


int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int target = 8;

    int result = binarySearch(arr,target);
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