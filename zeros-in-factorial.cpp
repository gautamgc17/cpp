//occurences of trailing zeroes in n factorial
//no of zeroes = occurences of 5 in factorial

#include <iostream>
using namespace std;

int findZeroes(int n){
	
	int ans=0;
	
	for(int d=5; n/d>0; d=d*5){
		ans = ans + n/d;
	}
	return ans;
}

int main(){
	
	long long int n;
	cout<<"Enter number to find trailing zeroes in its factorial: "<<"\n";
	cin>>n;
	
	cout<<findZeroes(n)<<endl;
	return 0;
}
