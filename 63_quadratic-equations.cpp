#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main(){
	
	float a,b,c;
	cin>>a>>b>>c;
	
	float d;
	d=b*b-4*a*c;
	
	float d1;
	d1 = sqrt(d);
	
	int x,y;
	
	if(d>0){
		cout<<"Real and Distinct"<<endl;
	}
	else if(d==0){
		cout<<"Real and Equal"<<endl;
	}
	else{
		cout<<"Imaginary"<<endl;
	}
	
	if(d>=0){
		x = (-b+(-d1))/(2*a);
	    y = (-b+d1)/(2*a);
	    
		cout<<x<<" "<<y;
	}
	return 0;	
}
