/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 26, 2014, 3:22 PM
 * write a program that will display the ocean level after 25 years 
 * if it is rising at a rate of 1.5 millimeters each year
 */

//System Libraries
#include <iostream>
using namespace std;
//Global COnstants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
  //Declare Variables
    float SeaLev, NxtLev;
  //output the initial question
    cout<<"Input the current ocean level in millimeters"<<endl;
    cin>>SeaLev;  
  //calculations
    NxtLev=(SeaLev+1.5)*25;
  //output results

 
    return 0;
}

