/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 17, 2014, 7:01 PM
 * Write a program that will calculate a car's gas milage based off of the
 * information inputed by the user 
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
  //Declare Variables
    float Gallons,Miles,TotMile;
   
   //output the initial question
     cout<<"Enter the amount of gallons of gas your car can hold"<<endl;
     cin>>Gallons;
     cout<<"Now enter the amount of miles your car can travel on a full tank"<<endl;
     cin>>Miles;
   //calculate the amount of miles the car gets per gallon of gas
     TotMile=Miles/Gallons;
     cout<<"Your Car gets "<<TotMile<<" miles per gallon of gas"<<endl;
    
   //Exit Stage Right
    return 0;
}

