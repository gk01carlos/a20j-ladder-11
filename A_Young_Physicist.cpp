#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    for (int i = 0 ; i < n; ++i) {
        int xi,yi,zi;
        cin >> xi >> yi >> zi;
        x += xi; y += yi; z += zi;
    }
    cout << (!x && !y && !z ? "YES" : "NO");
}