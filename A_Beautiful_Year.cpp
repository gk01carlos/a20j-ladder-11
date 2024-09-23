#include <iostream>
#include <vector>
using namespace std;
bool check(int n) {
    vector<int> v(10, 0);
    while (n) {
        int c = n % 10;
        v[c] += 1;
        if (v[c] > 1) return false;
        n /= 10;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    do {
        ++n;
    } while (!check(n));
    cout << n;
}