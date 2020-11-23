#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n;
	cout<<"Upper Limit: ";
	cin>>n;
	
	int max_so_far = INT_MIN;
	int min_so_far = INT_MAX;
	
	for(int i=0; i<n; i++){
		int no;
		cin>>no; 

		if(no > max_so_far){
			max_so_far = no;
		}
		if(no < min_so_far){
			min_so_far = no;
		}
	}
	cout<<"Max Number: "<< max_so_far <<endl;
	cout<<"Min Number: "<< min_so_far <<endl;
	return 0;
}
