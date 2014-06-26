/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on June 25, 2014, 7:34 PM
 * write a program that will compute the total sales tax(6%) on a $52 purchase 
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    float Item=52.0, STax=0.06, TotTax;
  
  //calculate the total sales tax (6%)
    TotTax=Item*STax;
  //output the results
    cout<<"The Total Sales Tax on a purchase of $52 would be $"<<TotTax<<endl;
  
  //Exit Stage Right  
    return 0;
}

