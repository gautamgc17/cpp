#include <iostream>
using namespace std;
int main(){
	
	float ans = 0.0;
	float inc = 1.0;
	
	int N;
	int P;
	cout<<"Enter number and precision value: "<<"\n";
	cin>>N>>P;
	 
	for(int times=0; times<=P; times++){
		
		//Finalise correct digit for current place
		while(ans*ans <= N){
			ans = ans + inc;
		}
		ans = ans - inc;
		
		//Updates the increment for the next position
		inc =  inc/10;
	}
	cout<<"Sqyare Root is: " <<ans<<endl;
	return 0;
}
