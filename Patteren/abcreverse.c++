#include<bits/stdc++.h>
 
using namespace std ;

int main()
{
    int n;
    cout<<"Enter Number of Rows : ";
    cin>>n;
    char value = 64;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char store = value+n-i+j;
            cout<<store<<" ";
        }
        cout<<endl;
    }
    return 0;
}