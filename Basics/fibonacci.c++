#include<bits/stdc++.h>
 
using namespace std ;

int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    
    int prev = 0;
    int next = 1;
    int temp;
    cout<<"0 1 ";
    for(int i=2;i<=n;i++){
        temp = next;
        next = prev+next;
        prev = temp;
        cout<<next<<" ";
    }
    return 0;
}