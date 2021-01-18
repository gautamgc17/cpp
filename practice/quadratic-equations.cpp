#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int a,b,c;
	cin>>a>>b>>c;
	
	float d , d1;
	d=b*b-4*a*c;
	
	d1 = sqrt(d);
	
	if(d>0){
		cout<<"Real and Distinct Roots"<<endl;
	}
	else if(d==0){
		cout<<"Real and Equal Roots"<<endl;
	}
	else{
		cout<<"Imaginary Roots"<<endl;
	}
	
	int x, y;
	
	if(d>=0){
		x = (-b+(-d1))/(2*a);
	    y = (-b+d1)/(2*a);
	    
		cout<<x<<" "<<y;
	}
	return 0;	
}
