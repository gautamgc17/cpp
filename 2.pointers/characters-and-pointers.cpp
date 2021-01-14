// Characters and Pointers

#include<iostream>
using namespace std;
int main(){
	
	int a[] = {1,2,3};
	char b[] = "abc";      // string terminates with a null character - 4 bytes
	cout << a << endl;    // address of int array
	cout << b << endl;    // prints character array
	cout<<sizeof(b)<<endl;
	
	char *c = &b[0];
	cout<< c <<endl;     // prints character array till null character is encountered
	cout<< *c <<endl;
	
	char ch = 'A';
	char *pch = &ch;          
	cout<<sizeof(ch)<<endl;    // 1 byte
	cout << ch <<endl;        // outputs character
	cout << pch <<endl;      // outputs string till null character is encountered
	
	return 0;
	
}
