#include<bits/stdc++.h>
using namespace std;

void print(int *ptr){
    cout<<ptr<<endl;
    ptr = ptr + 1;
    cout<<ptr<<endl;
}

void update(int *ptr){
    *ptr = *ptr + 1;
    ptr = ptr + 1;
}

int getsum(int *arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += *(arr+i);
        //Formula -> arr[i] = *(arr + i)   normal Array -> pointer Array formula
    }
    return sum;
}

int main()
{
    int value = 5;

    int *ptr = &value;

    // print(ptr);
    //to print ptr value 

    //update value 
    cout<<"before ->"<<*ptr<<endl;//update
    cout<<"before ->"<<ptr<<endl;//same
    update(ptr);
    //update ptr pointer address only in function not in main function we need to update in main function
    cout<<"After ->"<<ptr<<endl;//same 5
    cout<<"After ->"<<*ptr<<endl;//updat

    int arr[5] = {1,2,3,4,5};
    //int ans = getsum(arr,5);
    int ans = getsum(arr+3,2);//can change index and size of array as u  need
    cout<<"Sum is -> "<<ans;
    return 0;
}