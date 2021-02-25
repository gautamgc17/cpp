#include<iostream>
using namespace std;

int binarySearch(int arr[] , int n , int val){
	int start = 0 , end = n-1;
	
	while(start<=end){
		int mid = (start+end)/2;
		
		if (arr[mid] == val){
			return mid;
		}
		else if (val < arr[mid]){
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return -1;
}
int main(){
	int n , val;
	int arr[10];
	cout<<"Enter array size:\n";
	cin>>n;
	cout<<"Enter key to be searched:\n";
	cin>>val;
	cout<<"Enter array elements:\n";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<binarySearch(arr , n , val);
}
