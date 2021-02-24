#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<"\t";
	}
}

void reverseArray(int arr[] , int n){
	
	int i = 0 , j = n-1 , temp;
	
	while(i < j){
	    temp = arr[i];
	    arr[i] = arr[j];
	    arr[j] = temp;
	    i++;
	    j--;
	}
}

int main(){
	int arr[10] = {1,2,3,4,5};
	
	cout<<"Original Array:\n";
	printArray(arr , 5);
	
	reverseArray(arr , 5);
	cout<<"\nReversed Array:\n";
	printArray(arr , 5);
}
