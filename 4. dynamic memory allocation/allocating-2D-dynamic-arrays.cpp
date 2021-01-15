#include<iostream>
using namespace std;
int main(){
	
	int r , c;
	cin>>r>>c;
	
	int **arr;
	
	// Create an array of row heads 
	arr = new int *[r];
	
	// Create a 2-D array       
	for(int i=0; i<r; i++){
		
		arr[i] = new int[c];          // each element stores adddress of new array with size = no of columns
    }
    
    int val = 1;
    
    for(int i=0; i<r; i++){
    	for(int j=0; j<c; j++){
    		
    		arr[i][j] = val;
			val++;
			
			cout<< arr[i][j] <<	" ";
		}
		cout<<endl;
	}

    // Release memory spaces
    
	for(int i=0; i<r; i++){
		delete [] arr[i];
	}
	
	delete [] arr;
	
}
