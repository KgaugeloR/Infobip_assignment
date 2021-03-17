#include <iostream>
#include <stdio.h>
#include <stdbool.h>

using namespace std;

//function declaration 
bool isLeapYear(int);
int getDaysinMonths(int, int);

int main(){
//declare variable 
int year ;
int month ;
//prompt input
cout<< "enter a number between 1 - 9999. \n";
    cin>>year;
    cout<<"Enter month \n";
    cin>>month; 
//validate input 
while (year<0 || year>9999 & month <1 || month > 12)
{
    cout<<"enter valid year or Month. \n";
    cout<< "enter a number between 1 - 9999. \n";
    cin>>year;
    cout<<"Enter month between 1-12 \n";
    cin>>month;  
}

//store isleapyear result
 bool result = isLeapYear(year);

//output number of Day 
 cout<<"The month consist of "<< getDaysinMonths(month,year)<< " "<<"Days \n";

system("pause");
return 0;


}
//Function to check Leapyear
bool isLeapYear(int y)
{
    //declare variable 
    bool isleapYear = false;
    //Check if leap year
    if(y % 4 ==0){
        if(y % 100 ==0){
            if(y % 400 == 0){
                isleapYear= true;
            }

        }
        else isleapYear= true;
    }
   return isleapYear;
}
//function to determine number of days
int getDaysinMonths(int m, int y){
//If Feb check leapyear 
    if(m == 2){
        if(isLeapYear(y) ==true){
            return 29;
        }
        else{
            return 28;
        }   
    }
    else if (m ==1 || m == 3 || m == 4 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        return 31;
    }
    else{
        return 30;
    }
}




