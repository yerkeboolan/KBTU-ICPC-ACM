#include <iostream>


	using namespace std;


	int main() {
	
	string str;
	cin >> str;

	int n;
	cin >> n;

	int a[2][n];
	

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
	    }
    }
	


    return 0;
    }