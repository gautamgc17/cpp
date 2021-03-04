#include<iostream>
using namespace std;
int main(){
	int arr[10][10];
	int r , c;
	cout<<"Enter number of rows and columns:\n";
	cin>>r>>c;
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	// Wave Print
	for(int col = 0; col < c; col++){
		
		if(col%2 == 0){        // Even Column - Top to Bottom
		
			for(int row = 0; row < r; row++){
			    cout<<arr[row][col]<<" ";
			}
		}
		else{        // Odd Column - Bottom to Top
		
			for(int row = r-1; row >= 0; row--){
			    cout<<arr[row][col]<<" ";
			}
		}
	}
}
