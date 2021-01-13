#include <iostream>
using namespace std;
int main(){
	
	int x=10;
	int i=20;
	
	int *ptr;    // declaration : pointer for variable x - data type int*
	ptr = &x;    // assignment
	
	cout<< ptr <<endl;  // address of x
	cout<< &x <<endl;   // address of x
	
	cout<< *ptr <<endl;   // 10
	cout<< *(&x) <<endl;  // 10
	
	cout<< *(&ptr) <<endl;   // address of x 
	cout<< &(*ptr) <<endl;   // address of x
	
	x++;
	
	cout<<x<<"\t"<<*ptr<<endl; // 11 11
	cout<< &ptr <<endl;    //address of pointer bucket
	
	// Double Pointer - to store address of first pointer (pointer to pointer)
	int **xptr = &ptr;
	cout << xptr << "\t" << &ptr << endl;    
	
	int a = i;
	a++;
	cout<< a <<"\t"<< i <<endl;
	cout<< &a <<"\t"<< &i <<endl;

	return 0;
}
