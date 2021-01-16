#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main(){
	
	// Primitive Data Types
	int x = 7;
	float y = 7.5;
	double z = 1.23456789;
	char ch ='G';
	bool weather_rainy = true;
	
	//how much memory each is going to occupy - depends on data type so either give variable or data type
    cout<<"Int: "<<sizeof(x)<<endl;            // 4bytes
	cout<<"Float: "<<sizeof(y)<<endl;          // 4bytes
	cout<<"Double: "<<sizeof(double)<<endl;   // 8bytes
	cout<<"Char: "<<sizeof(ch)<<endl;         // 1 byte
	cout<<"Bool: "<<sizeof(bool)<<endl;       // 1byte
	
	// Data Type Modifiers + Data Types
    // long , short , signed , unsigned
	long long int a;
	cout << "long long int: " << sizeof(a) << endl;           // 8 bits
	
	cout << INT_MAX << endl;
	cout << INT_MIN << endl;
	
	a = INT_MAX;
	cout << "X: " << a << endl;
	
	a = a+1 ;
	cout << "Updated X: " << a << endl;    // Wrap Around or Overflow Condition
	
	return 0;
} 

