#include <iostream>
#include <cmath>

	using namespace std;

		
	int main() {
	int t, n, a[n];
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}	

	

	int b[n];
	int s = 0;
	for(int i = 1; i < n; i++) {
		if(b[i] >= 1 && b[i] <= a[i])
		s += abs(a[i + 1] - a[i]);
	}

	cout << s;
	return 0;
	}


		
