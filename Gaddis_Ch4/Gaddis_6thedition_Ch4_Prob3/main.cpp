/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on March 31, 2014, 6:08 PM
 * write a program that will determine whether or not an inputed date is a 
 * magic date. if the day and month multiplied together are equal to the year
 * it is a magic date. 
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    int month, day, year;
  //output the initial question and have the user input their data
    cout<<"Input a month (in  numerical format)"<<endl;
    cin>>month; 
    cout<<"Now enter the day"<<endl;
    cin>>day;
    cout<<"Now enter the last two digits of any year (ex: 1960 input 60)"<<endl;
    cin>>year; 
  //if the month*day is equal to the last two digits of the year it is a magic date  
    if (year==(day*month)){
        cout<<month<<"/"<<day<<"/"<<year<<" This is a magic date!"<<endl;
    }
    else{
        cout<<month<<"/"<<day<<"/"<<year<<" is not a magic date"<<endl;
    }
  //Exit Stage Right  
    return 0;
}

