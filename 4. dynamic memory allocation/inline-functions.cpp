/*
C++ provides an inline functions to reduce the function call overhead. Inline function is a function that is expanded in line when it is called. 
When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call. 
This substitution is performed by the C++ compiler at compile time. Inline function may increase efficiency if it is small. */

#include<iostream>
using namespace std;

inline int max(int a , int b){      // inline function
	return (a>b)?a:b;
}

int main(){
	
	int a, b;
	cin>>a>>b;
	
	int c = max(a, b);
	
	int x=10 , y=20;
	int z = max(x, y);
	
	cout<< c << "\t" << z;
}
