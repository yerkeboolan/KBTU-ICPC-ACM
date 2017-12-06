#include <iostream>

using namespace std;

int a[1000][1000];
int used[1000][1000];
int n, m;
int cnt;
	void dfs(int x, int y){
 		used[x][y]=1;
 			if(a[x+1][y]==1 && used[x+1][y]==0 &&x+1<=n){
  			dfs(x+1, y);
  			cnt++;
 }
		 if(a[x-1][y]==1 && used[x-1][y]==0 &&x-1>0){
  			dfs(x-1, y);
  			cnt++;
 }
 		if(a[x][y+1]==1 && used[x][y+1]==0 && y+1<=m){
  			dfs(x, y+1);
  			cnt++;
 }
 		if(a[x][y-1]==1 && used[x][y-1]==0 && y-1>0){
  			dfs(x, y-1);
  			cnt++;
 		}         	
}

int main(){
 		int t;
 		cin>>t;
 
	for(int k = 0; k < t; k++){
  		cin>>m>>n;
  		cnt = 1;
  	for(int i=1; i<=n; i++){
   		for(int j=1; j<=m; j++){
    	char c;
    	cin>>c;
    	if(c=='@'){
     	a[i][j]=2; 
    	}
    	if(c=='.'){
     		a[i][j]=1;
    	}
    	if(c=='#'){
     	a[i][j]=0;
    	}
   		} 
  }
   
  for(int i=1; i<=n; i++){
   	for(int j=1; j<=m; j++){
    	if(a[i][j]==2 && used[i][j]==0){
    	 dfs(i, j);
    	}
   	}
  }
  
  cout<<"Case "<<k+1<<": "<<used<<endl;

 }


 return 0;
}