#include <iostream>

const int MAXNUMBER = 2e5 + 10;

using namespace std;

	int main() {
	
	int n;
	int a[MAXNUMBER], b[MAXNUMBER];

	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}


	for(int i = 1; i <= n; i++) {
		b[a[i]] = i;
	}


	for(int i = 1; i <= n; i++) {
		cout << b[i] <<" ";
	}


	return 0;
	}

