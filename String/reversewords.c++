#include<bits/stdc++.h>
using namespace std;

string reverseWordsBetweenUnderscores(const string& input) {
    string result = input;
    int start = 0;

    for (int i = 0; i <= result.size(); ++i) {
        if (i == result.size() || result[i] == ' ') {
            reverse(result.begin() + start, result.begin() + i);
            start = i + 1;
        }
    }

    return result;
}

int main() {
    string input = "this is me";
    string output = reverseWordsBetweenUnderscores(input);
    cout << output << std::endl; // Output: siht_si_em
    return 0;
}
