#include <iostream>
#include <cstring>
using namespace std;

// char *strtok(char *s , char *delimiters) - convert a string into list of tokens - string tokenisation
// returns a character pointer , accepts a character array and a array of delimiters
// returns a token on each subsequent call
// on the first call function should be passed with string argument for 's'
// on subsequent calls we should pass the string argument as null

int main(){
	
	char s[100] = "Today is rainy day!";
	
	char *ptr = strtok(s , " ");             // first call
	cout<< ptr <<endl;
	
	//ptr = strtok(NULL, " ");
	//cout<< ptr <<endl;
	
	while(ptr != NULL){                    // It returns NULL when there are no more tokens
		ptr = strtok(NULL , " ");
		cout<< ptr <<endl;                 // subsequent call 
	}
	
	return 0;
}
