#include <iostream>

	using namespace std;

	int main() {
		
		int n, m;
		cin >> n >> m;

		int a[m];

		for(int i = 0; i < m; i++) {
			cin >> a[i];
		}

		int res;
		for(int i = 0; i < m; i++) {
			if(n == a[i] + a[i+1] && (n - 1) > a[i] + a[i+1]) {
			res = a[i] + a[i+1];
		}
		}

		cout << res;

		return 0;
		}
			