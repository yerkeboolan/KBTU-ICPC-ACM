#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    int h1 = 0, h2 = 0, h3 = 0;
    
    vector<int> building1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> building1[h1_i];
       h1 += building1[h1_i]; 
    }
    vector<int> building2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> building2[h2_i];
       h2 += building2[h2_i];
    }
    vector<int> building3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> building3[h3_i];
       h3 += building3[h3_i];
    }
    
    bool equalHeight = false;
    if(h1 == h2 && h2 == h3) {
        equalHeight = true;
    }
    int r1 = 0, r2 = 0, r3 = 0; 
    while(!equalHeight) {
        if(h1 >= h2 && h1 >= h3) {
            h1 -= building1[r1];
            r1++;
        } else if(h2 >= h1 && h2 >= h3) {
            h2 -= building2[r2];
            r2++;
        } else if(h3 >= h1 && h3 >= h2) {
            h3 -= building3[r3];
            r3++;
        }
        if((h1 == h2 && h2 == h3) || (h1 == 0 && h2 == 0 && h3 == 0)) {
            equalHeight = true;
        }
    }
    cout<<h1;
    return 0;
}
