#include <iostream>

using namespace std;

	int main() {

	int n, m;
	long long int t[55][55];

	cin >> n >> m;
	t[1][1] = 1;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			t[i + 2][j + 1] += t[i][j];
			t[i + 1][j + 2] += t[i][j];
		}
	}

	cout << t[n][m];

	return 0;
	}

