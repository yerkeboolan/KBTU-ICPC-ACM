	#include <iostream>
using namespace std;

	long long int fact(int N)
	{
    if(N < 0)
        return 0;
    if (N == 0)     
        return 1; 	
    else 
        return N * fact(N - 1); 
	}

	int main() {

   	int a,b;
    cin >>a >> b;
    long long int b1 = fact(b);
    long long int a1 = fact(a);

   	int res = (b1 / a1) % 10;
    cout << res <<endl;




    return 0;
    }
