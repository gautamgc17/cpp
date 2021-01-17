//ith row prints ith digits
//even row - starts with 0 and then alternate 1 and 0
//odd row - starts with 1 and then alternate 0 and 1
//print n lines

#include<iostream>
using namespace std;
/*
int main(){
	
	int rows;
	cin>>rows;
	
	for(int i=1; i<=rows; i++){
		if(i%2 != 0){
			int val = 0;
			for(int j=1; j<=i; j++){
				cout<<val;
				val = 1 - val;
			}
			cout<<endl;
		}
		else{
			int val = 1;
			for(int j=1; j<=i; j++){
				cout<<val;
				val = 1 - val;
			}
			cout<<endl;
		}
	}
	return 0;
} */

// short cut to if-else block : Ternary Operator
int main(){
	
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		
		int val = (i%2==0)? 1 : 0;
		
		//print ith values in ith line
		for(int j=1; j<=i; j++){
			
			cout<< val;
			val = 1 - val;          // flipping between 0 and 1
		}
		cout<<endl;
	}
	return 0;
}






