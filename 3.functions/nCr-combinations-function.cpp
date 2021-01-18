// formula to find number of different combinations of n distinct objects taken r at a time - nCr

#include<iostream>
using namespace std;

int factorial(int num){
	
	int fact = 1;
	
	for(int i=2; i <= num; i++){
		fact = fact*i;
	}
	return fact;	
}
int main(){
	
	int n , r;
	cin>> n >> r;
	
	int nfact = factorial(n);         // compute n!
	int rfact = factorial(r);         // compute r!
	int nrfact = factorial( n-r );    // compute (n-r)!
	
	int ans = nfact/(rfact*nrfact);
	cout<<ans;
	
	return 0;
}
//int main(){
//	
//	int n, r;
//	cin>> n >> r;
//	
//	int nfact = 1 , rfact = 1;
//	
//	// compute n!
//	for(int i=2; i <= n; i++){
//		nfact = nfact*i;
//	}
//	
//	// compute r!
//	for(int i=2; i <= r; i++){
//		rfact = rfact*i;
//	}
//	
//	// compute (n-r)!
//	for(int i=1; i <= (n-r); i++){
//		nrfact = nrfact*i;
//	} 
//	
//	int ans = nfact/(rfact*nrfact)
//	
//}
