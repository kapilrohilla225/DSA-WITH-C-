#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    //6 hai ya nhi 0 and 1
    cout<<"finding 8 -> "<<binary_search(v.begin(),v.end(),8)<<endl;
    //?? 
    cout<<"lower bound -> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    cout<<"upper bound -> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a = 3;
    int b = 5; 

    cout<<"max -> "<<max(a,b)<<endl;

    cout<<"min -> "<<min(a,b)<<endl;

    swap(a,b);

    cout<<"a -> "<<a<<endl<<"b ->"<<b<<endl;

    string abcd = "abcd";

    reverse(abcd.begin(),abcd.end());

    cout<<"string Reversed : "<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());

    cout<<"after rotate : "<<endl;
    //1 3 6 7 -> 3 6 7 1
    for(int i:v){
        cout<<i<<" ";
    }
}