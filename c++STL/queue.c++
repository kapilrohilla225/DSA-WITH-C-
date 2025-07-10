// fifo - first in first out
#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string>q;

    q.push("love");
    q.push("babbar");
    q.push("kumar");

    cout<<"Size before pop "<<q.size()<<endl;
    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"first element"<<q.front()<<endl;
    cout<<"last element "<<q.back()<<endl;
    cout<<"size after pop "<<q.size()<<endl;
}