#include<iostream>
using namespace std;

int factorial(int num){
	int fact = 1;
	for(int i=1; i <= num; i++){
		fact = fact*i;
	}
	return fact;	
}

int NCR(int n , int r){
	int ans = factorial(n)/(factorial(r)*factorial(n-r));
	return ans;
}

int main(){
	
	cout<< factorial(5) <<endl;
	cout<< NCR(5,3);
	
	return 0;
}

