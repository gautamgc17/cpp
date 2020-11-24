#include <iostream>
using namespace std;

int main(){
	
	int sum = 0;
	cout<<"Numbers divisible by 7 between 100 and 200 are : "<<endl;
	for(int i=100 ; i<=200 ; i++){
		if(i%7 == 0){
			cout<<i<<"\t";
			sum += i;
		}
	}
	cout<<"\n"<<"Sum of these numbers is: ";
	cout<<sum;
	return 0;
}
