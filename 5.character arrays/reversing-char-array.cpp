#include<iostream>
using namespace std;

int lengthArray(char arr[]){
	int count = 0;
	for(int i=0; arr[i] != '\0'; i++){
		count++;
	}
	return count;
}

void reverseString(char arr[]){
	int len = lengthArray(arr);
	int i = 0 , j = len-1;
	while(i < j){
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}

int main(){
	
	char arr[100];
	cin.getline(arr , 100);
	cout<<"Original String: "<<arr;
	
	reverseString(arr);
	cout<<"\nReversed String: "<<arr;
}
