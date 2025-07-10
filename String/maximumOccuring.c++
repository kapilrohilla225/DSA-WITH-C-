#include<bits/stdc++.h>
using namespace std;

char maximumOccurence(string s){
    int arr[26] = {0};//[0,0,0,0,0,0,0,] - 26 elements (0-25 index)

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1,ans = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            ans = i;
            maxi = arr[i];
        }
    }
    return ans + 'a';
}

int main()
{
    string s = "output";
    
    char ans = maximumOccurence(s);
    cout<<ans;
    return 0;
}