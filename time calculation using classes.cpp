#include<bits\stdc++.h>
#include<iomanip>
using namespace std;
class TIME
{
	protected:
		int HH,MM,SS;
		int seconds;
	public:
	    getTIME();
	    convertintoseconds();
	    displayTIME();		
};
TIME::getTIME()
{
	cout<<"Enter Time:\n";
	cout<<"Enter Hours: ";
	cin>>HH;
	cout<<"Enter Minutes: ";
	cin>>MM;
	cout<<"Enter Seconds: ";
	cin>>SS;
}
TIME::convertintoseconds()
{
	seconds=HH*3600+MM*60+SS;
}
TIME::displayTIME()
{
	cout<<"The time is: "<<setw(2)<<setfill('0')<<HH<<":"<<setw(2)<<setfill('0')<<MM<<":"<<setw(2)<<setfill('0')<<SS<<endl;
	cout<<"The time in total seconds is: "<<seconds;
}
int main()
{
	TIME T;
	T.getTIME();
	T.convertintoseconds();
	T.displayTIME();
	return 0;
}
