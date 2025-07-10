#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number Of Rows : ";
    cin>>n;
    int j;
    char value = 65;
    for(int i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
            }
            for(int k=n-i;j<=n;j++){
                 cout<<value;
                 value++;
        }
        cout<<endl;
    }
   return 0;
}