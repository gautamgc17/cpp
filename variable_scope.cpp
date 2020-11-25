#include <iostream>
using namespace std;

int x=100;  // Global Scope
int main(){
	int x = 10;       // Local Scope
	
	cout<<x<<endl;
	
	for(x=0;x<=5;x++){
		cout<<x<<endl;
	}
	
	//Prints Local Value
	cout<<"Local Variable X: "<<x<<endl;    
	
	//Prints Global Value
	cout<<"Global Variable X: "<< ::x << endl;    //Scope Resolution Operator
	return 0;
}
