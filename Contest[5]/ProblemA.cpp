#include <iostream>
#include <algorithm>

using namespace std;

 
int p(int A[], int f, int l){
	int b = A[l];
	int b_index = f;
	for (int i = f; i < l; i++){
		if (A[i] <= b){
			swap(A[i], A[b_index]);
			b_index = b_index + 1;
		}
	} 

	swap (A[b_index], A[l]);
	return b_index;
}

void sort (int arr[], int f, int l){
	if (f < l){
		int b_index = p(arr, f, l);  // 6 8 5 1 9  
		sort(arr, f, b_index-1);
		sort(arr, b_index+1, l);
	}
}   


int main(){
	int nOfE;
	int nOfC;
	int timeE1;
	int d;

	cin>>nOfE;
	cin>>nOfC;
	int arr[nOfE+nOfC];
	cin>>timeE1;
	int temp=1;
	for(int i=0; i<nOfE; i++){
		arr[i]=temp*timeE1;
		temp++;
	}
	cin>>d;
	int timeC;
	for(int i=nOfE; i<nOfC+nOfE; i++){
		cin>>timeC;
		arr[i]=timeC;
		
	}

	quick_sort(arr, nOfC+nOfE-1);
	int close[nOfC+nOfE];
	int b=0;
	int cnt =0;
	for(int i=0; i<nOfC+nOfE; i++){
		if(b<arr[i]) {
		close[cnt]=arr[i]+d;
		b = close[cnt];
		cnt++;  }
	}
	cout<<cnt;
	return 0;
}