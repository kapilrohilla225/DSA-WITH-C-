#include<bits/stdc++.h>
 
using namespace std ;

int main()
{
    int n;
    cout<<"Enter Number Of Rows : ";
    cin>>n;
    cout<<"Enter Numebr of Column : ";
    int m;
    cin>>m;
    char value = 64;
    char temp = 64;
    for(int i=0;i<n;i++){
        value = temp + i;
        for(int j=0;j<m;j++){
            char store = value + 1;
            cout<<store<<" ";
            value++;
        }
        cout<<endl;
    }

    return 0;
}