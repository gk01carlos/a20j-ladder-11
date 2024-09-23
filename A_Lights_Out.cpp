#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> lights = {{1,1,1}, {1,1,1}, {1,1,1}};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int n;
            cin >> n;
            if (n % 2) {
                vector<pair<int,int>> moves = {{0,-1}, {-1,0}, {1,0},{0,1}};
                lights[i][j] = !lights[i][j];
                for (auto move : moves) {
                    if (i + move.first >= 0 && i + move.first <= 2 && j + move.second >= 0 && j + move.second <= 2) {
                        lights[i + move.first][j + move.second] = !lights[i + move.first][j + move.second];
                    }
                }
            }
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << lights[i][j];
        }
        cout << endl;
    }
    return 0;
}