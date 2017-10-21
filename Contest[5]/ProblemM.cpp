#include <iostream>
#include <cmath>

	using namespace std;

	int main() {
		
		int x1, y1, x2, y2;

		cin >> x1 >> y1 >> x2 >> y2;


		int tempX = abs(x1 - x2) + 1;
		int tempY = abs(y1 - y2) + 1;


		if(x1 == x2 || y1 == y2) {
			cout << (tempX + tempY)*2 + 2;
		}
		else  {
			cout << (tempX + tempY)*2;
		}		


		return 0;
	}