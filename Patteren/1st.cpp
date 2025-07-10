#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout<<"Enter Number Of Rows : ";
    cin>>row;
    char count = 65;
    int i = 1;
    while(i<=row){
        int j = 1;
        while(j<=i){
        cout<<count<<" ";
        j++;
        count++;
        }
        cout<<endl;
        i++;
    }
   return 0;
}