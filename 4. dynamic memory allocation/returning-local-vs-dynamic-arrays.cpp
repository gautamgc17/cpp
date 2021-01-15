#include<iostream>
using namespace std;
/*
int *fun(){                      // function returns a pointer
	
	int a[] = {1, 2, 3, 4, 5};
	cout<< a <<endl;             // address of array
	cout<< a[0] <<endl;          // first element of array
	
	// warning : address of stack memory associated with local variable 'a' returned
	return a; 
}

int main(){
	
	int *b = fun();          
	cout<< b << endl;          // address of array
	
	// Static variables are deleted after variable scope or function call is over
	cout<< b[0] <<endl;        // first element , garbage value or may give segmentation fault
}*/

int *fun(){                      // function returns a pointer
	
	int *a = new int[5];
	a[0] = 100;
	a[1] = 99;
	
	cout<< a <<endl;           // address of array
	cout<< a[0] <<endl;        // first element of array
	
	return a;          // address of heap memory associated with variable 'a' returned
}

int main(){
	
	int *b = fun();         // 'a' gets destroyed after returning address which points to array in heap memory 
	cout<< b << endl;          // address of array
	cout<< b[0] <<endl;        // first element
	
	delete [] b;     // clear dynamic array
	
	return 0;
}
