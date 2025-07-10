#include<bits/stdc++.h>
using namespace std;

double squareRoot(int num,double precision)
{
    int s = 0;
    int e = num;
    double ans = 0.0;
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        mid = s + (e-s)/2;
        if(mid*mid == num)
        {
            return mid;
        }
        else if((mid*mid)>num)
        {
            e = mid - 1;
        }
        else if((mid*mid)<num)
        {
            ans = mid;
            s = mid + 1;
        }
    }
     double increment = 0.1;
    for (int i = 0; i < precision; i++) {
        while (ans * ans <= num) {
            ans += increment;
        }
        ans -= increment;
        increment /= 10;
    }

    return ans;
}

int main()
{
    int num = 333;
    int precision = 3;
    double result = squareRoot(num,precision);
    cout<<"Square Root of "<<num<<" is : "<<result;
   return 0;
}