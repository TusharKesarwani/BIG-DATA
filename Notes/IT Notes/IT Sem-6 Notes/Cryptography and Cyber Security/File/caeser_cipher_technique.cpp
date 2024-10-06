// Type a program to implement ceaser cipher technique
// Author - Tushar Kesarwani
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    int sh;
    cin >> sh;
    for(int i=0;i<n;i++){
        if (isupper(s[i])){
            ans += char(int(s[i] + sh - 65) % 26 + 65);
        }
        else {
            ans += char(int(s[i] + sh - 97) % 26 + 97);
        }
    }
    cout << ans << endl;
    return 0;
}