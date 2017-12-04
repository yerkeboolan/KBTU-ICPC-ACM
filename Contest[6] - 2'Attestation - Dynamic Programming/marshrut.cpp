#include <iostream>

using namespace std;
const int INF = 1e9 + 7;

	int main() {
		
	int n;
	int a[10][10];
	int t[10][10];

	for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            cin >> a[i][j];
            t[i][j] = INF;
        }
    }
    t[8][1] = 0;
    for (int i = 8; i >= 1; i--) {
        for (int j = 1; j <= 8; j++) {
            t[i - 1][j] = min(t[i - 1][j], a[i - 1][j] + t[i][j]);
            t[i][j + 1] = min(t[i][j + 1], a[i][j + 1] + t[i][j]);
            t[i - 1][j + 1] = min(t[i - 1][j + 1], a[i - 1][j + 1] + t[i][j]);
        }
    }
    cout << t[1][8];

    return 0;
    }

