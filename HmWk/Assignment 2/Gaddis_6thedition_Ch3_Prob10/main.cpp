/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 19, 2014, 7:13 PM
 * write a program that will convert Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//Global COnstants

//Function Prototypes

//Execution begins Here
int main(int argc, char** argv) {
  //Declare Variables
    float Cel,Far;
    
  //output the initial question
    cout<<"Input Celsius degrees"<<endl;
  //user will input the degrees in Celsius
    cin>>Cel;
  //convert Celsius to Fahrenheit
  //(NOTE!!!! i did not know how to put in 9/5 as a fraction so i converted it into a decimal)
    Far=1.8*Cel+32;
  //output the results
    cout<<Cel<<" degrees Celsius is "<<Far<<" degrees Fahrenheit"<<endl;
    
    //Exit Stage Right
    return 0;
}

