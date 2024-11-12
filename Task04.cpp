#include <iostream>
using namespace std;
int main()
{
   int days;
   int amount;
   int total_amount = 0;
   float average;
   
   //ask the user for days expenditure calculations
   cout<<"How many days do you want to track your expenses = " ;
   cin>>days;
   
   for(int i=1; i<=days; i++)
   {
   	cout<<"Enter the amount spent per day "<< i << " : " ;
   	cin>>amount;
   	
   	total_amount = total_amount + amount;
   	
   	average = total_amount/ days;
   }
     //total amount in the week
     cout<<"Total amount per week = "<<total_amount<<endl;
     
     //display its average amount
     cout<<"Average  = "<<average<<endl;
   if(average >50) 
   {
   	cout<<"You have to reduce your expences"<<endl;
   }
   	
}
