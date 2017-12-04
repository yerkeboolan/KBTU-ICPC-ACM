#include <iostream>

	using namespace std;

	const int MAXNUMBER = 2e5 + 10;

	int n, k;
	int a[MAXNUMBER];
	void comb(int x, int last) {
		if(x == k) {
			for(int i = 0; i < k; i++) {
				cout << a[i] <<" "<<"\n"<<a[i == k - 1];
			}

		}	else  {
			for(int i = last + 1; i <= n; i++) {
				a[x] = i;
				comb(x + 1, i);
			}
		}
	}

	int main() {
		cin >> n >> k;
		comb(0, 0);
		return 0;
	}

	
		
