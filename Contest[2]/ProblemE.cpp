#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    string s;
    vector<char> c;
    
    cin >> s;
    
    for(int i = 0; i < s.length(); i++)
    {
        c.push_back(s[i]);
        
        if(c.size() > 1)
            if(c[c.size() - 1] == c[c.size() - 2])
            {
                c.pop_back();
                c.pop_back();
            }
    }
    
    for(int i = 0; i < c.size(); i++)
        cout << c[i];
   	
    
    return 0;
}