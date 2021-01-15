#include<iostream>
using namespace std;
int main(){
	
	// Static Allocation + Deallocation = Compiler
	int x[100] = {0};
	cout<< sizeof(x) <<endl;    // x = fixe sized array - 400 bytes
	cout<< x <<endl;             // symbol table
	// Here b cant be overwritten/reassigned ; b is part of Read Only Memory
	
	
	// Dynamic Allocation - create a pointer to store address of array created in heap memory
	int n;
	cin>>n;
	
	int *a = new int[n]{0};     // Initialization
	cout<< sizeof(a) <<endl;    // 8
	cout<< a <<endl;            // variable 'a' that is created inside the static memory -> overwritten/ reassigned
	// a = new char[300]
	
	for(int i=0; i<n; i++){
		cin>>a[i];
		cout<< a[i] << endl;
	}
	
	// Free up Space - De allocation
	delete [] a;
	
	return 0;
}
