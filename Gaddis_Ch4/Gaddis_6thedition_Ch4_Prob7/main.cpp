/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on March 26, 2014, 12:28 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    float second, minute;
    
  //output the initial questions  
    cout<<"Input Seconds"<<endl;
    cin>>second; 
  //make calculations
    minute=second/60;
  //if its greater then 60 sec then output the minutes
    if(second>=60){
        cout<<"thats "<<minute<<" minutes"<<endl;
    }
  //if the seconds are greater or equal to 3600 output the number of hours  
    if(second>=60){
        cout<<"thats "<<minute<<" minutes"<<endl;
    }
        
    
  //Exit Stage Right  
    return 0;
}

