#include<iostream>
using namespace std ;
int main()
{
   int marks ;
   cout<<"Enter your marks:";
   cin>> marks;

   if(marks>=90)
   {
    cout<<"congratulations! you got A+";

   }
   else if(marks>=80 && 90)
   {
    cout<<"you got B+";
   }
   else if(marks >=70 && 80)
   {
    cout<<"you got C+ ";
   }

   else 
   {
    cout<<"you PASSED";
   }
}