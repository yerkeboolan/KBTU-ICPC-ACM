#include <iostream>

using namespace std;
const int MAXNUMBER = 1e5 + 7;

	int main() {
	
	int n;
	int t[MAXNUMBER];
	string st;

	cin >> n;

	for (int i = 1; i <= n; i++) {
        t[i] = -1;
    }

    cin >> st;

	for(int i = 0; i < n; i++) {
		if(t[i] == -1 || st[i] == 'w') {
			continue;
		}

		if(st[i] == '"') {
			t[i]++;
		}

		for(int j = 1; j <= 5; j += 2) {
			t[i + j] = max(t[i + j], t[i]); 
		}
	}


	cout << t[n-1];


	return 0;
	}

	