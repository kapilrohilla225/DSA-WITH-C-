#include<bits/stdc++.h>
 
using namespace std ;

int main()
{
    int n;
    cout<<"Enter Number Of Rows : ";
    cin>>n;
    char value = 65;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cout<<value;
            value++;
        }
        
        cout<<endl;
    }
    return 0;
}