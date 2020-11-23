#include<iostream>
using namespace std;
int main(){
	
	int array[5];
	cout<<"Enter Array Elements:\n";
	
	for(int i=0 ; i<5 ; i++){
		cin>>array[i];
	}
	
	cout<<"You Entered:\n";
	
	for(int i=0;i<5;i++){
		
		int *ptr = &array[i];
		cout<<*ptr<<endl;
	}
	return 0;
}
