#include<iostream>
using namespace std;
int main(){
	int n ;
	cin>>n;
	
	int arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int j=0; j<n-1; j++){
		
		// find out the smallest element index in the unsorted paet
		int min_idx = j;
		
		for(int k=j; k<=n-1; k++){
			if(arr[k] < arr[j]){
				min_idx = k;
			}
		}
		
		// swap the found minimum element with the first element of unsorted part
		swap(arr[j] , arr[min_idx]);
	}
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
