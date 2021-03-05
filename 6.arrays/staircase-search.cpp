// StairCase Search - Search an Element in Row-wise and Column-wise Sorted Array

#include<iostream>
using namespace std;

int staircaseSearch(int arr[4][4] , int n , int key){
	
	// set indexes for top right element
	int i=0 , j=n-1;
    
    while(i < n && j >= 0){
    	
    	// If the element is equal then print the position and end.
    	if (key == arr[i][j]){
    		cout<<key<<" found at "<<i<<" and "<<j<<endl;
    		return 0;
		}
		
		// Check if the current element is greater than key then decrease the count of j. Exclude the current column.
		else if (key < arr[i][j]){
			j--;
		}
		
		// Check if the current element is less than key then increase the count of i. Exclude the current row.
		else{
			i++;
		}
	}
	cout<<key<<" not found"<<endl;
	return -1;
}

int main(){
    int arr[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    
    int key;
    cout<<"Enter element to be searched: ";
    cin>>key;
    
    cout<< staircaseSearch(arr , 4 , key); 
}
