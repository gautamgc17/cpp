#include<iostream>
using namespace std;
int main(){
	
	//string words;
	//cin>>words;     // cin>> don’t read 'special' character like space, newline (\n) tabulation (\t)… and these make cin terminate. 
	//cout<<words;
	
	char ch;
	// read the first char
	ch = cin.get();           // this method reads single character including spaces/newlines
	
	while(ch != '.'){
		// print the last character that we read
		cout<<ch;
		// update my char in the memory (read the next character)
		ch = cin.get();
	}
	
	cout<<endl;
	cout<<ch;       // ch = '.'  (1 byte)
}
