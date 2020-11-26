#include <iostream>
using namespace std;

void patternABCD(){
	
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		
		char alphabet='A';
		
		for(int col=1; col<= n-i+1; col++){
			cout<<alphabet;
			alphabet += 1;
		}
		cout<<endl;
	}
}
int main(){
	patternABCD();
}
