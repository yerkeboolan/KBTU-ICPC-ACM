#include <iostream>

using namespace std;



	void reverseNumber() {
		int num, temp, answer;
		answer = 0;
		cin >> num;
		while(num != 0) {
			temp = num % 10;
			answer = answer*10 + temp;
			num = num/10;
		}
	}


int main() {
    
   	int n = (int) reverseNumber();  

    cout << n;
    return 0;
}