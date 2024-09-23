#include <iostream>
using namespace std;
int main() {
    string s; cin >> s;
    int l = 0;
    int n = s.length();
    for (char c : s)
        if (c >= 'a' && c <= 'z') ++l;
    if (l >= n - l) {
        for (int i = 0; i < n; ++i) s[i] = tolower(s[i]);
    } else {
        for (int i = 0; i < n; ++i) s[i] = toupper(s[i]);
    }
    cout << s;
    return 0;
}