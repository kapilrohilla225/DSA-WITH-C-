#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(3);

    // for(int i:d){
    //     cout<<i<<" ";
    // }

    cout<<endl;

    cout<<"print first index element"<<d.at(1)<<endl;

    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"Before Erase : "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After Erase : "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }
//capacity remains unchanged and size changes acc to pop and push

}