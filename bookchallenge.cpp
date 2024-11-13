#include <iostream>
using namespace std;
int main()
{
	//DECLARE VARIABLES
	float weekchallenge;
	int books;
	int sum=0;
	float average;
	
	//DISPLAY THE INPUT FROM THE USER
	cout<<"How many weeks the reading challenge lasts? : " ;
	cin>> weekchallenge;
	
	 //CONDITIONS USING WHILE LOOP 
	for(int i=1; i<=weekchallenge; i++)
	{
		cout<<"Enter the no of books read in week "<<i <<" = " ;
		cin>> books;
		sum= books +sum;
	}
	
    //TOTAL BOOKS READ PER WEEK
	cout<<"Total books read = "<<sum<< endl;
	
	//AVERAGE OF BOOKS READ PER WEEK
	average = sum/weekchallenge;
	cout<<"Average books read per week: "<<average<< endl;
	
	//IF AVERAGE ACCEEDES 5 PER WEEK THEN AWARDING MESSAGE FOR USER
	if(average>5)
	{
		cout<<"Congratulations ! you will receive a prize"<<endl;
	}
	
}
