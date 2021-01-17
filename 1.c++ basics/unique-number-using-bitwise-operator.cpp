// Given a list of numbers where every number occurs twice except one - find that unique number

#include<iostream>
using namespace std;
int main(){
	
	int n , num;
	cin>>n;
	
	int ans = 0;
	
	for(int i=0; i<n; i++){
		
		cin>>num;
		
		// Bitwise XOR Operator
		ans = ans^num;
	}
	cout<<ans;
}
