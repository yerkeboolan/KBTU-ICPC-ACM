#include <iostream>
	
	using namespace std;

		int main() {
			
			int n;
			cin >> n;
			int cnt = 0;
			int a, b;

	    if(n == 1) cout <<"-1";           
		for(int i = 1; i < n; i++) {	
			if(i < n / i) {
			if(i * n/i == n && i != n/i) {
			cnt++;
			a = i;
			b = n / a;
			}
			}
		}


			if((a * b) + 1 == n) cout << "1" <<" "<< n;
			if(cnt > 1) {    
			
			
			cout << "1" <<" "<< n <<endl << a <<" "<<b;
			}   
			else if(cnt == 1) {
				cout << "1" <<" "<< n;
			}


		

		

		



		return 0;
		}


		