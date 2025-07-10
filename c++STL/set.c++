//store only unique elements modification nhi hota ya add ya delete
#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(7);

    for(int i:s){
        cout<<i<<" ";//only unique elements
    }
    cout<<endl;
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
//count element
    cout<<"5 is present or not : "<<s.count(5)<<endl;

    set<int>:: iterator itr = s.find(5);
    
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}
