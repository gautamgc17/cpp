#include<iostream>
using namespace std;

// function to check whether a given number is prime or not
bool isPrime(int n){
	
	for(int i=2; i<=n-1; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

// function to print all prime numbers upto n - using above function
void printPrimes(int N){
	
	for(int i=2; i<=N; i++){
		
		if( isPrime(i) ){
			cout<< i << " ";
		}
	}
}

int main(){
	
	int n;
	cin>>n;
	
	cout<<"Prime numbers upto "<< n << " are: ";
	printPrimes(n);
}
