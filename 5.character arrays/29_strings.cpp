#include <iostream>
#include <cstring>
using namespace std;
int main(){
	
	// String Initialisation
    string s0;
    string s1("Hello");
    string s2 = "Hello World";
    string s3(s1);
    string s4 = s2;

    char a[] = {'a' , 'b', 'c' , '\0'};
    string s5(a);
    
    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    
    cout<< sizeof(a) <<endl;
    cout<< strlen(a) <<endl;
    cout<< s5.length() <<endl;
    
    // Empty Function
    if(s0.empty()){
    	cout<<"This string is empty."<<endl;
	}
	
	// Append Function
	s0.append("Lets do C++");
	cout<<s0<<endl;
	
	s0 = s0 + " and Python";
	cout<<s0<<endl;
	
	// Remove 
	cout<<s0.length()<<endl;
	s0.clear();
	cout<<s0.length()<<endl;
	
	// Compare Two Strings
	s1 = "Abd";
	s2 = "Msd";
	cout << s1.compare(s2) << endl;   // Returns an integer 0 if strings are equal , <0 if s1 is shorter , >0 if s1 is longer
	
	// Overloaded Operators
	if(s2 > s1){
		cout << "s2 is lexicographically bigger than s1." << endl;
	}
	
	cout << s1[0] << endl;
	
	// Find Substrings
	string s = "I want apple juice.";
	int idx = s.find("apple");
	cout << idx << endl;
	
	// Remove a word from the string
	string word = "apple";
	int len = word.length();
	s.erase(idx , len+1);
	cout << s << endl;
	
	// Iterating over all characters in string
	for(int i=0 ; i < s3.length() ; i++){
		cout<< s3[i] << " , ";
	}
	cout<<endl;
	
	// Iterators - 'string::iterator' class
	// auto keyword specifies that the type of variable i.e being declared will be automatically deduced from its initializer
	// In case of functions, if their return type is auto then that will be evaluated by return type expression at runtime
	
	for(auto it = s3.begin() ; it != s3.end() ; it++){
		cout << (*it) << ",";                           // s.begin function gives a reference to the first element to iterator it
	} 
	cout<<endl;  
	
}
