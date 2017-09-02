#include <iostream>

	using namespace std;

	int main() {
	
	int n;
	cin >> n;

	int a[n];

	int cnt = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < n; i++) {
		int t = a[i];
			for(int j = 1; j <= t; j++) {	
				if(t % j == 0)
			cnt++;
	}
		

    if(cnt == 3) {
    	cout << "YES"<<endl;
    }
    else {
    	cout << "NO"<<endl; 
    }
    }

		return 0;
	
}	