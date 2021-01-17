#include<iostream>
using namespace std;

int x = 100;     // Global Scope

int main(){
	
	int x = 10;     // Local Scope
	cout<<x<<endl;
	
	for(int x=0; x<=5; x++){
		cout<<"within loop scope: "<<x<<endl;
	}
	
	cout<<"Local Value: "<< x <<endl;          // local x
	cout<<"Global Value: "<< ::x <<endl;      // global x - SCOPE RESOLUTION OPERATOR
}
