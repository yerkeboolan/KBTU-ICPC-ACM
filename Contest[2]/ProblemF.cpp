#include <iostream>
#include <vector>

	using namespace std;

	int main() {

	    vector<char> v;
	

	    int count = 0;

	    string s;

	    cin >> s;

	    for(int i = 0; i < s.length(); i++) {
	    	if(s[i] == '(') {
	    		v.push_back(s[i]);
	    	}

	    else if(v.empty() == false) {
	    	count++;
	    	v.pop_back();
	   	}
	}

	cout << 2*count;	
	    	



		


	return 0;
	}

	