#include <iostream>
 
using namespace std;

	int main() {

	int n, x;

	cin >> n >> x;
	
	int a[n][n];
	int c = 0;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			a[i][j] = i*j;		
		}
	
	}

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
		    if(a[i][j] == x) {
		    c++;
	  	}
	}
}

	cout << c;

	
   	return 0;

}



	