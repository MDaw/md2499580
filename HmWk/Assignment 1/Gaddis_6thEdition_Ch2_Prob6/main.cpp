/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on June 25, 2014, 7:34 PM
 * write a program that will calculate an employee's annual pay
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
    float payamt=1700.00, payperd=26, annpay;
  
  //Calculate his annual pay
    annpay=payamt*payperd;
  //output the results  
    cout<<"If an employee get payed $1700.00 every two weeks, with 26 payment periods,"<<endl;
    cout<<"then his annual salary would be $"<<setprecision(2)<<fixed<<annpay<<"."<<endl;
    
  //Exit Stage Right  
    return 0;
}

