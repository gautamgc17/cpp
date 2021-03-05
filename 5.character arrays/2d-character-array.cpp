#include<iostream>
#include<string>
using namespace std;
int main(){
	// char arr[][7] = {{'a','b','c','\0'}, {'d','e','f','g','h','\0'}};
	// arr[1][0] = 'D';
	// cout<<arr[0]<<endl;
	// cout<<arr[1]<<endl;
	
	// Read a List of Strings and Store them in 2-D Character Array
	int n;
	char arr[10][10];
	cin>>n;
	
	cin.get();     // to consume '\n'
	
	for(int i=0; i<n; i++){
		cin.getline(arr[i] , 10);
	}
	
	for(int i=0; i<n; i++){
		cout << arr[i] << endl;
	}
}
