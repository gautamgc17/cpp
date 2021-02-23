#include<iostream>
#include<climits>
using namespace std;
int main(){
	
	int n , num;
	cout<<"Enter upper limit: ";
	cin>>n;
	
	int max_so_far = INT_MIN;
	int min_so_far = INT_MAX;
	    
	for(int i=0; i<n; i++){
		cin>>num;
		
		if(num > max_so_far){
	    	max_so_far = num;
		}
		
	        if(num < min_so_far){
			min_so_far = num;	
		}
	}
	
	cout<<"Max Number: "<<max_so_far<<endl;
	cout<<"Min Number: "<<min_so_far<<endl;
		
	return 0;
}
