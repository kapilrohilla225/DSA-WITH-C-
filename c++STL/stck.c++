//lifo - last in first out
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("kumar");
    s.pop();
    cout<<"Top Element ->"<<s.top();
    cout<<endl;
    cout<<"Size ->"<<s.size();
    cout<<endl;
    cout<<"Empty or not->"<<s.empty();
   return 0;
}