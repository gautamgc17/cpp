//Find the displacement in terms of coordinates

#include<iostream>
using namespace std;
int main(){
	
	int x=0;
	int y=0;
	
	char dirn;
	dirn = cin.get();
	
	while(dirn != '\n'){
		
		if(dirn=='N'  || dirn=='n'){
			y++;
	    }
	    if(dirn=='S' || dirn=='s'){
		    y--;
	    }
	    if(dirn=='E' || dirn=='e'){
		    x++;
	    }
	    if(dirn=='W' || dirn=='w'){
		    x--;
		}
		
		// read the next character (update direction)
		dirn = cin.get();
	}
	cout<<"Final displacement is x: "<<x<<" , y: "<<y;
}
