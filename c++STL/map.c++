#include<iostream>
#include<map>
//time complexity - o(logn)
//unordered - o(1)
using namespace std;

int main(){
    map<int,string> m;

    m[1] = "babbar";
    m[2] = "love";
    m[13] = "kumar";
    m.insert({5,"bheem"});
    cout<<"before Erase : "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.erase(13);  
    cout<<"After Erase : "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

    cout<<"finding 13 ->"<<m.count(13)<<endl;
}