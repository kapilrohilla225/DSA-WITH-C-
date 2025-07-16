#include<bits/stdc++.h>
using namespace std;
int main()
{   /*
    int num = 5;
    int *ptr = &num;
    cout<<"Value is : "<<*ptr<<endl;
    cout<<"Address is : "<<ptr<<endl;
    ptr++;   //Move Pointer With Data type Size
    cout<<"Address is : "<<ptr<<endl;
    cout<<"size of integer"<<sizeof(num)<<endl;
    cout<<"Size of pointer : "<<sizeof(ptr);
    */

    /*
    int arr[10] = {2,5,6};
    cout<<"Adress of First Memory Block : "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Adress of First Memory Block : "<<arr<<endl;

    cout<<" 4th - "<< *arr<< endl;
    cout<<" 5th - "<< *arr + 1 << endl;
    cout<<" 6th - "<< *(arr + 1)<< endl;
    cout<<" 7th - "<< *(arr) + 1<< endl;

    */

    //formula is comes out is : - arr[i] =  *(arr + i);
    //i[arr] = *(i + arr);  // **

    //-> Size of Array and pointer 

    int temp[10];
    cout<<"Size of Complete Array : "<<sizeof(temp)<<endl;

    int *ptr = &temp[0];
    cout<<"Size of Pointer : "<<sizeof(ptr)<<endl;
    cout<<"Size of One block Of Array : "<<sizeof(*ptr)<<endl;
    cout<<"Size of One block Of Array : "<<sizeof(&ptr)<<endl;

    return 0;
} 