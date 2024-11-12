#include <iostream>
using namespace std;
int main()
{
	float temp;
	float temperature;
	char choice;
	choice='c','C','F','f';
	cout<<"Enter any tempetaure : ";
	cin>>temp;
	
	cout<<"Enter any choice : (C/c for celcius and f/F for fahrenheit) ";
	cin>>choice;

	
    	switch(choice)
	{   
	//finding temperature in fahrenheit
	  case 'c': case 'C':	
		temperature =( (9/5) * temp) + 32;
		cout<<"Temperature in Fahrenheit is "<<temperature << "F"<<endl;	
 	    break;
 	    
	//finding temperaure in celcius
      case 'f': case'F':
    	temperature = (temp - 32) * 5/9;
    	cout<<"Temperature in celcius is " <<temperature<< "Degree"<<endl;
    	break;
    	
    	default : 
    	cout<<"Incorrect option";
	}
	return 0;
}
