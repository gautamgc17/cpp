#include<iostream>
using namespace std;
int main(){
	
	int* pi = new int;     // 8 bytes allocated for pi in stack memory and 4 bytes created for integer in heap memory
	*pi = 10;
	cout<< *pi <<endl;
	
	delete pi;
	
	char *pc = new char;
	*pc = 'A';
	cout<< *pc <<endl;
	
	delete pc;
	
	int n;
	cout<<"Enter num of elements: ";
	cin>>n;
	
	int *pa = new int[n];
	
	for(int i=0; i<n; i++){
		cin>>pa[i];
	}
	for(int i=0; i<n; i++){
		cout<<pa[i]<<" ";     // Linear Array
	}
	cout<<endl;
	
	int max = -1;
	for(int i=0; i<n; i++){
		if (pa[i] > max){
			max = pa[i];
		}
	}
	cout<< "Max num in array:"<< max;
	
	delete [] pa;
	
	return 0;
}
