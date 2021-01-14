// Arrays and Pointers

#include<iostream>
using namespace std;
int main(){
	
	int a[10];
	cout<< a << "\t" << a+1 <<endl;          // a is equivalent to address of first element - a[0]
	cout<< &a[0] << "\t" << &a[1] <<endl;    // a+1 points to address of next element
	
	cout<< sizeof(a) << endl;      // 40 bytes
	
	a[0] = 5;
	a[1] = 10;
    cout<< *a <<endl;          // dereferencing first element
	cout<< *(a+1) <<endl;      // dereferencing second element
	
	int *p = &a[0];
	
	cout<< a << "\t" << p <<endl;
	cout<< &a <<endl;                  // address of a array
	cout<< &p <<endl;                 // address of pointer variable
	
	cout<< sizeof(p) << "\t" << sizeof(a) << endl;    // p - 8 bytes ; a - 40 bytes
	
	// a = a + 1    => error - array type is not assignable because no separate memory corresponding to a
	p = p + 1;      // pointer variable can be reassigned
	p = a + 1;
	cout<< p <<"\t"<< p;
	
	return 0;
	
}
