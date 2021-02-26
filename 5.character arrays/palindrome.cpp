#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(char ch[]){
	
	int start = 0 , end = strlen(ch)-1;
	while (start < end){
		if (ch[start] == ch[end]){
			start++;
			end--;
		}
		else{
			return false;
		}
	}
	return true;
}

int main(){
	
	char ch[50];
	cin.getline(ch , 50);
	cout<<"The string is: "<<ch<<endl;
	
	if (isPalindrome(ch)){
		cout<<"Palindromic String";
	}
	else{
		cout<<"Not a Palindromic String";
	}
	
}
