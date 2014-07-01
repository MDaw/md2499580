/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 19, 2014, 3:58 PM
 * write a program that will tell the user how many calories they consumed 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {   
 //Declare Variables
   float cookie,TotCal,cal=75;
    
 //output initial question
   cout<<"How many cookies did you eat?"<<endl;
   cin>>cookie;
 //calculate the amount of calories
   TotCal=cookie*cal;
   cout<<setprecision(2)<<fixed;
   cout<<"You had "<<TotCal<<" calories (each cookie is 75 calories)"<<endl;
    
 //Exit Stage Right
    return 0;
}

