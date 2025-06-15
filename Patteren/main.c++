#include<bits/stdc++.h>
 
using namespace std ;

int main()
{
    int n;
    cin>>n;
    char value = 65;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
    }
    return 0;
}