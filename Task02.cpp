#include <iostream>
using namespace std;
int main()
{

 int integer;
	int sum =0;
	
	cout<<"Enter an integer = ";
	cin>>integer;
	
	//applying for loop
	
	for(int i=0; i<=integer; i++)
	{
		sum= sum + i;
	}
	cout<<"Result =" <<sum;
	
}
