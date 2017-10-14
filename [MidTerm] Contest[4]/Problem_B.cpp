#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;
int main()
{
	while(true)
	{
		int n;
		cin >> n;
		
		if(n == 0)
		break;

		stack <int> st;

		
				
		int cur=0;
		for(int i=0; i < n; i++)
		{
			int num;
			cin >> num;
			


			if(num-cur==1)
			cur++;

			else
			{
				st.push(num);
			}
			if(st.top()-cur==1)
			{
				while(st.top()-cur==1 && st.size() > 1)
				{
					cur++;
					st.pop();
				}
			}
			
		            
		
		}
	
		
		if(st.size() == 1) 
	 	 cout << "yes"<<"\n";
		else 
			cout << "no"<<"\n";
	}
	return 0;
	}
	 