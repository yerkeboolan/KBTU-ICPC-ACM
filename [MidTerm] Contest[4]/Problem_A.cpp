#include <iostream>

using namespace std;
	struct Number {
	int a, b;
	};

int reverse(int x) {
	int r1, r2 = 0;
	while(x != 0) {
		r1 = x % 10;
		r2 = r2*10 + r1;
		x/=10;
	}

	return r2;
}
	
  
	int main() {
	int sum, num;
	cin >> num;

	Number m[num];
	int n[num];

	for(int i = 0; i < num; i++){
		cin >> m[i].a >> m[i].b;
		sum = reverse(m[i].a) + reverse(m[i].b);
		n[i] = reverse(sum);
	}

	for(int i = 0; i < num; i++) {
		cout << n[i]<<endl;
	}

  	return 0;
}