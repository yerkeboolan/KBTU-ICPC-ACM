#include <iostream>

using namespace std;

const int MAXNUMBER = 1e5 + 7;
const int INF = 1e9 + 7;

int main() {

	int n;
	int t[MAXNUMBER];
	cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        t[i] = -INF;
        for (int j = max(0, i - 2); j < i; j++) {
            t[i] = max(t[i], t[j] + x);
        }
    }
    cout << t[n];

    return 0;
}
