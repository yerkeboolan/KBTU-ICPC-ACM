#include <iostream>
#include <vector>

	using namespace std;

	int main() {
		
		string s;
		cin >> s;
		vector<char> v;
		string yesno;

		for(int i = 0; i < s.length(); i++) {
			
			v.push_back(s[i]);
			if( == "++")      {
				if(v[v.size() - 1] == v[v.size() - 2])  {
				
					yesno = "YES";
			    }
			}
			else yesno = "NO";
		}

		cout <<yesno;

			

	   return 0;
	  }

