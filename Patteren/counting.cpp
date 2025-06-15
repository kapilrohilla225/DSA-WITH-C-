#include<bits/stdc++.h>
 
using namespace std ;

int main()
{
    int n;
    cout<<"Enter Number of Rows : ";
    cin>>n;
    int row = 1;
    
    int count = 1;
    while(row<=n){
    int column = 1;
        while(column<=row){
            cout<<count<<" ";
            count++;
            column++;
        }
        cout<<endl;
        row++;
    }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<count;
    //         count++;
    //     }
    //     cout<<endl;
    // }

    return 0;
}