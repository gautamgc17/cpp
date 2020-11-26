//occurences of trailing zeroes in n factorial
//occurences of 2 > occurences of 5
//no of zeroes = occurences of 5 in factorial
//occurences of 5 = n/5 + n/25 + n/625 until it becomes zero
//trailing zeroes in 100! = 24

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
