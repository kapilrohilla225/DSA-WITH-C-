#include<bits/stdc++.h>
 
using namespace std ;

int main()
{
    int n;
    int num = 1;
    cout<<"Enter Number of Rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=3;j++){
            num++;
        }
        cout<<endl;
    }
    num -=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=3;j++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
    return 0;
}