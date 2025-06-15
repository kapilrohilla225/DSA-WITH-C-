/*
                                        1
                                     1  2   1
                                  1  2  3   2   1
 */
#include<bits/stdc++.h>
 
using namespace std ;

int main()
{
    int n;
    cout<<"Enter Number Of Rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++){
            cout<<"  ";
        }
        for(int num = 1;num <= i;num++){
            cout<<num<<" ";
        }
        for(int num = i-1;num>=1;num--){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}