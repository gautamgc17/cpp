#include<iostream>
using namespace std;
int main(){
	
	int i , n , key;
	cout<<"Enter number of Array Elements: ";
	cin>>n;
	
	int arr[10] = {};
	cout<<"Enter Array Elements:\n";
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter key to be searched: ";
	cin>>key;
	
	for (i=0; i<n; i++){
		
		if(arr[i] == key){
			cout<<key<<" found at index "<<i;
		    break;
		}
	}
	if(i==n){
		cout<<key<<" not found!";
	}
	return 0;
}
