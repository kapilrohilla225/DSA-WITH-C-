#include <bits/stdc++.h>
using namespace std;

bool valid_palindrome(char ch){
    if(ch >= 'a' && ch <='z' || ch >='A' && ch<='Z' || ch >='0' && ch <= '9'){
        return 1;
    }
    else{
        return 0;
    }
}

char Tolower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch - 'A' + 'a';
    }
    return ch;
}

int string_length(string s)
{
    int count = 0;
    while (s[count] != '\0')
    {
        count++;
    }
    return count;
}

bool check_palindrome(string s)
{
    int st = 0;
    int len = string_length(s);
    int end = len - 1;

    while (st <= end)
    {
        if(!valid_palindrome(s[st])){
            st++;
        }
        else if(!valid_palindrome(s[end])){
            end--;
        }
        else if (Tolower(s[st]) == Tolower(s[end]))
        {
            st++;
            end--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string s;
    s = "@N#i t$i(n";
    bool result = check_palindrome(s);
    if (result == 1)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Non Palindrome";
    }

    return 0;
}