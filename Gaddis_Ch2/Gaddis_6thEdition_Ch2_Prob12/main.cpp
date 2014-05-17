/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * write a program that calculates the number of acres in a tact of 
 * land with 389,767 square feet
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution beginsHere
int main(int argc, char** argv) {
   //Declare Variables
    float acre=43560, Land=389767, totacre;
    
   //calculate the amount of acres land equals 
    totacre=Land/acre;
   //output the results 
    cout<<"389,767 square ft of land would be equivalent to "<<totacre<<" acres of land"<<endl;
    
   //Exit Stage Right 
    return 0;
}

