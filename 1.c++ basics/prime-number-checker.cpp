#include<iostream>
using namespace std;
int main(){
	
	int i, num;
	cin>>num;
	
	for(i=2; i<=num-1; i++){
		
		if(num%i == 0){
			
			cout<< "Not Prime" <<endl;
			break;
		}
	}
	// cout<< i <<endl;
	
	if(i == num){
		
		cout<< "Prime";
	}
	return 0;
}
