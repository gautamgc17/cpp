// Read N , followed by N strings and print the largest string

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n , len , largest_len = 0;
	cin>>n;
	
	char arr[100];
	char largest[100];
	cin.get();
	
	for(int i=0; i<n; i++){
		cin.getline(arr , 100);
		len = strlen(arr);
		if (len > largest_len){
			largest_len = len;
			strcpy(largest , arr);
		}
	}
	cout<<"String: "<<largest<<" is largest with "<<largest_len<<" characters";
}
