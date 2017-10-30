#include <iostream>
	
	using namespace std;



	bool isPrime(int number) {
	
	   
	
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	
	return true;	
}
	int main() {
		
	   	freopen("ages.in", "r", stdin);
	   	freopen("ages.out", "w", stdout);
		int n;
		cin >> n;
        
        if(n == 1) cout <<"-1";
        else if(isPrime(n)) 	cout << "1" <<" "<< n;

         
        else cout << "-1";
			

	 return 0;
		   }



			