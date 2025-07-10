#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c = 5;
    int result = c<<5;
    cout<<"Left Shift : "<<result<<endl;
    int result2 = c>>1;
    cout<<"Right Shift : "<<result2<<endl;
    //& operator = both need to 1 and 1 = 1 else 0
    int result3 = 5 & 2;
    cout<<"& Operator : "<<result3<<endl;
    //or operator = one of them need 1 or 0 = 1 if 0 or 0 = 0
    int result4 = 5 | 2;
    cout<<"OR Operator : "<<result4<<endl;
    //&& Logical and operator
    int result5 =  5&&0;
    cout<<"Logical & : "<<result5<<endl;
    //|| Logical OR Operator
    int result6 = 5||1;
    cout<<"Logical Or : "<<result6;
   return 0;
}