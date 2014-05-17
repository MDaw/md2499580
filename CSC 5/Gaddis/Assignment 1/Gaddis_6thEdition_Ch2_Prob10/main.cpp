/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * write a program that will calculate the miles a car gets per gallon 
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
    float MDri=350, Gal=12, MPG;
   
   //Calculate MPG
    MPG=MDri/Gal;
   //output the results
    cout<<setprecision(2)<<fixed;
    cout<<"A car that can travel 350 miles per 12 gallons of gas is getting"<<endl;
    cout<<MPG<<" miles per gallon of gas."<<endl;
    
   //Exit Stage Right 
    return 0;
}

