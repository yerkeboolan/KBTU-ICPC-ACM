	#include <iostream>
using namespace std;

#define ll long long 

ll a, b;
int main(){  
	//freopen("in.in", "r", stdin);
	//freopen("out.out", "w", stdout);
	cin >> a >> b;
	if(b >= a + 10){
		cout << 0 << endl;
		return 0;
	}
	else{
		ll cur = 1;
		for(ll t = a + 1; t <= b; ++t){
			ll x = t % 10;
			cur *= x;
			cur %= 10;
		}
		cout << cur << endl;
	}
    return 0;
}                            