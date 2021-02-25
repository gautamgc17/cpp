#include<iostream>
using namespace std;

void printArray(int a[][5], int m , int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int a[][5] = {{1,2} , {3,4}};
	printArray(a , 4 , 4);
	
	int arr[4][4];
	int m , n;
	cin>>m>>n;
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	
	// Row Wise
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	// Column Wise
	for(int j=0; j<n; j++){
		for(int i=0; i<m; i++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
