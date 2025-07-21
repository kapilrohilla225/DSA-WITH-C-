//a function calls itself
//big problem -> solve by similar smaller problems

//factorial

int printFactorial(int n){
    if(n == 0){
        return 1;
    }
    else{
    return n * printFactorial(n-1);
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = printFactorial(n);
    cout<<ans;
    return 0;
}