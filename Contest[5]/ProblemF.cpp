#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	string a[n];
	set<string> unique;
	for(int j=0; j<n; j++){
		cin>>s;
		
		for(int i=s.size()-1; i>0; i--){
		    	if(s[i]=='u'){ 
				s.replace(i, 1, "oo");
				
			}
			
			
			if(s[i]=='h' && s[i-1]=='k'){
				s.replace(i-1, 2, "h");
				
			}
		}
		if (s[0]=='u'){
			s.replace(0, 1, "oo");
		}
		
		a[j]=s;
		unique.insert(s);

	}
	
	cout<<unique.size();
	return 0;
}