#include<iostream>
using namespace std;

void printABCDPattern(int n){

	for(int i=1; i<=n; i++){
		
		char alphabet = 'A';
		
		for(int j=0 ; j<=n-i ; j++){
			cout<<alphabet;
			alphabet++;
		}
		cout<<endl;
	}
}

int main(){
	
	int n;
	cin>>n;
	
	printABCDPattern(n);
	
	return 0;
}
