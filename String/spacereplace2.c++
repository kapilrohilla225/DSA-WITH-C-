/*
Sample Input 1:
Coding Ninjas Is A Coding Platform
Hello World

Sample Output 1:
Coding@40Ninjas@40Is@40A@40Coding@40Platform
Hello@40World
*/
#include<bits/stdc++.h>
using namespace std;

string replaceSpaces(string &str){
	int len = str.length();
    int spaceCount = 0;
    for(int i=0;i<len;i++){
        if(str[i] == ' '){
            spaceCount++;
        }
    }
    int newLen = len + spaceCount * 2 - 1;
    str.resize(newLen + 1);
    int i = len - 1;
    int j = newLen;
    while(i >= 0){
        if(str[i] == ' '){
            str[j--] = '0';
            str[j--] = '4';
            str[j--] = '@';
        }
        else{
            str[j--] = str[i];
        }
        i--;
    }
    return str;
}

int main()
{
    string str;
    getline(cin,str);
    cout<<replaceSpaces(str)<<" ";
    return 0;
}