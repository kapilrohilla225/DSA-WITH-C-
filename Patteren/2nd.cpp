#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of Rows : ";
    cin>>n;
    int i=0;
    while(i<n){
        int j = 0;
        while(j<n-i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
   return 0;
}