#include<iostream>
#include<algorithm>
using namespace std;

void display(int arr[][10] , int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void rotateArray(int arr[][10] , int n){
	
	// reverse rows
	for (int row=0; row < n; row++){
		int start = 0;
		int end = n-1;
		while (start < end){
			swap(arr[row][start] , arr[row][end]);
			start++;
			end--;
		}
	}
	
	// take transpose
	for (int i=0; i<n ; i++){
		for(int j=0; j<n; j++){
			if(i<j){
				swap(arr[i][j] , arr[j][i]);
			}
		}
	}	
}

int main(){
	int n;
	cout<<"Enter order of matrix: ";
	cin>>n;
	
	int arr[10][10];
	cout<<"Enter array elements:\n";
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Original Array:\n";
	display(arr , n);
	
	cout<<"Rotated Array:\n";
	rotateArray(arr , n);
	display(arr , n);
}
