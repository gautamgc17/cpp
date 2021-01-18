#include <iostream>
using namespace std;
int main(){
	
	int num , sum = 0;
	cout<<"Enter Number: "<<endl;
	cin>>num;
	
	int n = num;

	while(n != 0){
		
		int rem = n%10;
		sum += rem*rem*rem;
		n = n/10;
	}
	if(sum==num){
		cout<<num<<" is an Armstrong Number";
	}
	else{
		cout<<num<<" is not Armstrong Number";
	}
	return 0;
}


