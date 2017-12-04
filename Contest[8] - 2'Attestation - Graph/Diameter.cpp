#include <iostream>

	using namespace std;

	const int INF = 10000000;
	long long int a[1001][1001], n;
	long long int mx[1001];
	long long int mxi, mni;

	int main() {
		cin >> n;
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				cin >> a[i][j];
				if(a[i][j] == -1)
				a[i][j] = INF;
			}
		}


	  for (int k = 1; k <= n; k++)
        	for (int i = 1; i <= n; i++)
            	for (int j = 1; j <= n; j++)
                    a[i][j] = min(a[i][j], a[i][k] + a[k][j]);	

      for (int i = 1; i <= n; i++) {
       	 for (int j = 1; j <= n; j++) {
           		mx[i] = max(a[i][j], mx[i]);
         }
       		if(i == 1) {
            	mni = mx[i];
        	}
        mxi = max(mxi,	mx[i]);
        mni = min(mni,	mx[i]);
 
    }
    cout << mxi << endl << mni;
 
    return 0;
}
