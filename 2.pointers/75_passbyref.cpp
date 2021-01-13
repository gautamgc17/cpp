#include <iostream>
using namespace std;

//Pass by Reference by Pointers
void increment(int *aptr){
	
	*aptr = *aptr + 1;
	cout<< "Inside Function " << *aptr << endl;    // 11
}

int main(){
	
	int a = 10 ;
	increment(&a);
	
	cout<< "Inside Main "<< a;      // 11
	
	return 0;
}

/*
//Pass by Value
void increment(int a){
	
	a = a + 1;
	cout<< "Inside Function " << a << endl;  // 11
}

int main(){
	
	int a = 10 ;
	increment(a);
	
	cout<< "Inside Main "<< a;     // 10
	
	return 0;
}  */

