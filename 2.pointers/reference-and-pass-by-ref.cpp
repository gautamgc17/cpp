// Reference and Pass by Reference

#include<iostream>
using namespace std;

// Functions can share their local variables if arguments are passed as reference variables

void increment(int& n){      // pass by reference
	n++;
}

int main(){
	
	int i = 9;
	increment(i);    // 10
	
	int &j = i;     // j is reference variable ; points to same memory address as i
	i++;
	cout<< j <<endl;     // 11
	
	int k = 50;
	j = k;
	cout<< i ;    // 50
}
