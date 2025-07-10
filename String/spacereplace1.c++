#include<bits/stdc++.h>
using namespace std;

string space_replace(string str,char ch){
    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
            str[i] = ch;
        }                                                                                               
    }
    return str;
}

int main()
{
    string str;
    cout<<"Enter A String : "<<endl;
    getline(cin,str);
    char ch;
    cout<<"Enter character : "<<endl;
    cin>>ch;

    cout<<space_replace(str,ch);
    return 0;
}