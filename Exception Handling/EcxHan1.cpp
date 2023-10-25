/// *****************Exception handling*****************
//Synatx = Rules of writing a language
//Execption are run time anomalies(unexpected) or unusual condition that a program may encounter while executing.
//ex- division by zero (undefined) acces to an array outsides of its bound running out of memory space.
//Types of execption- 1) synchronous 2)Asynchronous
//Execption handling mechanism->
//hit the execption 
//throw an execption
//catch the execption 
//handle the execption
//
//1) try block
//2) throw block
//3) catch blocl


#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter the  values of a and b: ";
	cin>>a;
	cin>>b;
	
	int x=a-b;
	try{
		if(x!=0){
			cout<<"result(a/x) = "<<a/x<<endl;
		}
		else{ // execption is detected
			throw(x); // execprion throw
		}
	}
	
	catch (int i) //catch the exeception 
	{
		//handle the execption
		cout<<"Execption caught:x = "<<x;
	}
	cout<<"end"; //printing afterthe execption handling10
	cout<<"result(a/x)="<<a/x<<endl;
	return 0;
}