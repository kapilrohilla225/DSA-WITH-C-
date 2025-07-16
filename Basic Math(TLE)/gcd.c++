#include<bits/stdc++.h>
using namespace std;
//HCF = (GCD)
int gcd(int n,int m){
    if(n==0){
        return m;
    }
    if(m==0){
        return n;
    }

    while(n!=m){
        if(n>m){
            n = n-m;
        }
        else if(m>n){
            m = m-n;
        }
    }
}

int main()
{
    int n,m;
    cout<<"Enter Numbers of HCF : ";
    cin>>n>>m;
    cout <<"HCF is : " << gcd(n,m);
    return 0;
}