#include<bits/stdc++.h>
 
using namespace std ;

int main()
{
    int n;
    cout<<"Enter Number Of Rows : ";
    cin>>n;
    char value = 64;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            char store = value + 1;
            cout<<store<<" ";
        }
        cout<<endl;
        value++;
    }
    return 0;
}