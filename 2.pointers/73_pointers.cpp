#include <iostream>
using namespace std;
int main(){
	
	int x=10;
	int z;
	cout<< &x <<endl;  //address
	
	float y = 10.5234;
	cout<< &y <<endl;    //address
	
	//does not work for character variables
	char ch = 'A';
	cout<< &ch <<endl;     //outputs the character itself
	
	//explicit type casting from char* to void*
	cout << (void *)&ch << endl;
	
	int*ptr;    // Declare pointer
	ptr=&x;     // Assignment to pointer variable
	
	cout<<sizeof(ptr)<<endl;  //memory address is 8 bytes(64 bits) for all data types - depends on operating system
	cout<<sizeof(&ch)<<endl;
	
	//reassigning another address to variable
	ptr = &z;
	cout<<z <<" "<<&z <<" "<< ptr;
	
	return 0;
}
