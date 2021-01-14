// Pointer Arithmetic

#include<iostream>
using namespace std;
int main(){
	
	int x=20;
	int *xptr = &x;
	cout<<xptr<<endl;
	
	xptr++;             // 4 bytes or 1 integer forward
	cout<<xptr<<endl;
	
	xptr += 2;
	cout<<xptr<<endl;
	
	xptr -= 3;
	cout<<xptr<<endl;
	
	double d = 10.45;
	double *dptr = &d;
	cout<<dptr<<endl;
	dptr = dptr+1;        // 8 bytes or 1 double forward
	cout<<dptr<<endl;
	    
	return 0;
}

