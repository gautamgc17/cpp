/* Code to print the number pyramid
                1
               232
              34543
             4567654            
*/             

#include<iostream>
using namespace std;
int main(){
	
	int rows;
	cin>>rows;
	
	// Loop for rows 1 to n - Each row prints (2*i-1) numbers where i is row number
	for(int i=1; i<=rows; i++){
		
		// Spaces
		for(int spaces = 1; spaces <= rows-i; spaces++){
			cout<<" ";
		}
		
		// Increasing Sequence of Numbers
		int val = i;
		for(int cnt = 1; cnt <= i; cnt++){
			cout<<val;
			val++;
		}
		
		// Decreasing Sequence of Numbers
		val = val - 2;
		for(int cnt = 1; cnt <= i-1 ; cnt++){
			cout<<val;
			val = val - 1;
		}
		// Print a new line
		cout<<endl;
	}
	return 0;
}
