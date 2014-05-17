/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 30, 2014, 7:36 PM
 * write a program that will display how high the ocean's current water level 
 * will rise in 5, 7, and 10 years (in millimeters). 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants

//Function Prototypes 

//Execution Begin Here
int main(int argc, char** argv) {
  //Declare Variables
    float level,level5,level7,level10,year=1.5;
  
  //output the initial question  
    cout<<"What is the ocean's current level (in millimeters)?"<<endl;
    cin>>level;
  //Calculate the ocean's level in 5 years
    level5=level+(1.5*5);
  //calculate the ocean's level in 7 years  
    level7=level+(1.5*7);
  //calculate the ocean's level in 7 years  
    level10=level+(1.5*10);
  //output th results
    cout<<setprecision(2)<<fixed;
    cout<<"In 5 years the oceans sea level will have risen to "<<level5<<" millimeters, in"<<endl;
    cout<<"7 years it will have risen to "<<level7<<" millimeters, and in 10 years "<<level10<<" millimeters."<<endl;
    
  //Exit Stage Right  
    return 0;
}

