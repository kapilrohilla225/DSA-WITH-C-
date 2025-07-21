#include <bits/stdc++.h>
using namespace std;

int lastOccurence(int arr[], int s, int e, int target)
{
    int ans = -1;
    // imp base case
    if (s > e)
    {
        return ans;
    }
    int mid = s + (e - s) / 2;
    // if found
    if (arr[mid] == target)
    {
        // IMPORTANT CACHE OF THIS QUESTION IS HERE WHICH MEANS IN WHICH CONDITION SWITCH RIGHT OR LEFT(THIK HAI BHAIYA JI)
        int rightSearch = lastOccurence(arr, mid + 1, e, target);
        return (rightSearch != -1 ? rightSearch : mid);
    }
    else if (arr[mid] > target)
    {
        return lastOccurence(arr, s, mid - 1, target);
    }
    else
    {
        return lastOccurence(arr, mid + 1, e, target);
    }
}

int main()
{
    int arr[5] = {1, 3, 3, 3, 5};
    int e = 4, s = 0;
    int target = 3;
    int ans = lastOccurence(arr, s, e, target);
    if (ans == -1)
    {
        cout << "Element Not Found ";
    }
    else
    {
        cout << "Element Found at Index : " << ans;
    }
    return 0;
}