#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    while (k--) {
        for (int i = 0; i < n -1; ++i) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                ++i;
            }
        }
    }
    cout << s;
}