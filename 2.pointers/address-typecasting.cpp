// Address Type Casting

#include<iostream>
using namespace std;
int main(){
	
	int i = 65;
	char c = i;        // Implicit TypeCasting
	cout<<c<<endl;
	
	int *p = &i;
	// char *cp = p;     Error - cannot convert int type to char
	char *pc = (char*)p;     // Explicit TypeCasting
	
	cout<< *p <<endl;
	cout<< *pc <<endl;
	cout<< *(pc + 1) <<endl;
	cout<< *(pc + 2) <<endl;
	cout<< *(pc + 3) <<endl;
	
	cout<< p <<endl;    // outputs address of integer
	cout<< pc ;        // character pointer outputs all character elements till it finds null character - 'A\0\0\0'
	
	return 0;
}
