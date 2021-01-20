#include <iostream>
using namespace std;

int main(){
	
	int a[] = {1,2,3};    //cout outputs address of int array
	
	int n = sizeof(a)/sizeof(int);
	
	cout<< a<< sizeof(a)<< endl;
	cout<< n <<endl;
	
	
	char b[] = {'a','b','c'};     //garbage value until null character is encountered
	cout<< b<< sizeof(b)<< endl;
	
	char c[] = {'m','s','d','\0'};   //recommended - cout outputs contents of character array - operator overloading
	cout<< c<< sizeof(c)<< endl;
	
	char s[10];
	cin>>s;
	cout<<s<<sizeof(s)<<endl;
	
	char s2[] = "hello";
	cout<<s2 <<sizeof(s2) <<endl;
	
	
	return 0;
}
