/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on February 4, 2014, 6:45 PM
 * write a program that will calculate the assessment value of a house
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants 

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    float actvalue, assvalue, proptax, proptax2;
    
  //output initial Question 
    cout<<"What is the actual value of the property?"<<endl;
    cin>>actvalue;
  //calculate the assessment value of the house
    assvalue=actvalue*0.60;
  //output the results
    cout<<"The assessment value of the property (with an actual value of $"<<actvalue<<") is $"<<assvalue<<endl;
  //calculate the property tax of the property
    proptax=actvalue/100;
    proptax2=proptax*0.64;
  //output the results
    cout<<"The property tax on this property (at the rate of 64 cents per 100 dollors) is $"<<proptax2<<endl;
    
    
  //Exit Stage Right  
    return 0;
}

