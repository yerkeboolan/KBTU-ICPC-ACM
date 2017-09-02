#include <iostream>
#include <string>

using namespace std;

	string str;

	int cnt; 
	
	int main() {                         
		getline(cin, str);
		sort(str.begin(), str.end());
		for(int i = 1; i < str.length() - 1; i++) {
			if(str[i] >= 'a' && str[i] <= 'z' && str[i] != str[i+1]) {
			
				cnt++;
				
			}	
		  }
	cout << cnt <<endl;
	return 0;
}
	
