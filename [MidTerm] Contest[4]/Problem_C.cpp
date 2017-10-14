#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

#define module 1000000007


	stack<pair<int, int> > st;

	int a[10000000];

	int main() {
		
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	long long ans = 1;
	for(int i = 0; i < n; i++) {
		if(st.empty() || a[i] >= st.top().first) {
		 st.push(make_pair(a[i], i));
		 }
		else {
			while(!st.empty() && a[i] < st.top().first) {
				pair<int, int> x = st.top();
				st.pop();
				ans = (ans*((long long)(i-x.second+1)))%module;
				}
			st.push(make_pair(a[i], i));
		}
	}                     

cout << ans;

return 0;
}

	