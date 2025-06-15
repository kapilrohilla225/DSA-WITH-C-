#include<bits/stdc++.h>
 
using namespace std ;

int main()
{
    int n;
    cout<<"Enter Number Of Rows :";
    cin>>n;
    for(int i=1;i<=n;i++){
        int value = i;
        for(int j=i;j>=1;j--){
            cout<<value;
            value--;
        }
        cout<<endl; 
    }
    return 0;
}