// While loop is entry controlled loop as it tests the condition before executing any of the statements within loop
// do-while is exit controlled loop as it executes its statements atleast once even if condition fails for first time 

#include<iostream>
using namespace std;
int main(){
	int start = 10;
	int cliff_end = 10;
	
	do{
		start += 1;
		cout<<"Taking 1 step, reaching "<<start<<endl;
	}
	while(start<cliff_end);
	
	cout<<"Final value: "<<start<<endl;
	
	if(start==cliff_end){
		cout<<"We are standing at cliff end!";
	}
	else {
		cout<<"Falling from the egde!";
	}
	
	return 0;
}
