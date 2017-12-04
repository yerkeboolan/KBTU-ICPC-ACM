#include <iostream>

using namespace std;
const int INF = 1e9 + 7;


	int main() {
	int n;
	long long int t[111][111], answer = -INF;

	cin >> n;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			t[i][j] = -INF;
			int x;
			cin >> x;
			if(i != j)	t[i][j] = max(t[i][j], x + t[i - 1][j]);
			else if(j != 1)  t[i][j] = max(t[i][j], x + t[i - 1][j - 1]);
			else if(i == 1) {
				 t[i][j] = x;
			}
			else if(i == n) {
			 answer = max(answer, t[i][j]);
			}
		}
	}



	cout << answer;
	return 0;
	}

