#include<bits/stdc++.h>
using namespace std;
//2 pointer approch
vector<int> reverseArray(vector<int>arr,int m){
    int s = m;
    int e = arr.size()-1;
    while(s<e){
        //by swap function

        swap(arr[s],arr[e]);

        s++;
        e--;
    }
    return arr;
}

int main()
{
    vector<int>arr = {4,3,2,1};
    int m = 2;
    vector<int> result = reverseArray(arr,m);//Here m is index,which reverse array after himself
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
   return 0;
}