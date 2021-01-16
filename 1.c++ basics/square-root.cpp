// Given a number N , find its square root

#include<iostream>
using namespace std;
int main(){
	
	int N , P;
	cout<<"Enter number and precision value:"<<"\n";
	cin>> N >> P ;
	
	float ans = 0;
	float inc = 1;
	
	for(int times=0; times <= P; times++){
		
		// Finalize the correct digit for the current place
		while(ans*ans <= N){
			
			ans = ans + inc;
		}
		// Update the increment for the next position
		ans = ans - inc;
		
		inc = inc/10;
	}
	cout << "Square Root upto given precision is: " << ans ;
	
	return 0;	
}
