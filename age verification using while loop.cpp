#include <iostream>
using namespace std;
int main()
{
   int age;
   
   //DISPLAY THE INPUT FROM THE USER
   cout<<"Enter your age : ";
   cin>>age;
   
   //AGE CONDITIONS USING WHILE LOOP
   while(!(age>=0 && age<=120))
   {
   	cout<<"Enter your age : ";
    cin>>age;
   }
   cout<<"your age is "<< age;
   
   return 0;

} 
