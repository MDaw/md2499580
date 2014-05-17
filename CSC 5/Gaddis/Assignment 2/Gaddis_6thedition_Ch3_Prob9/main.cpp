/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 19, 2014, 5:23 PM
 * write a program that will calculate the user's monthly
 * and annual automobile costs
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
    float loanpay, insure, gas, oil, tires, mainten, monthly, yearly;
    
  //output the questions and have the user input their info.
    cout<<"How much do you pay a month for your car's loan payments?"<<endl;
    cin>>loanpay;
    cout<<"How much do you pay a month for your car's insurance?"<<endl;
    cin>>insure;
    cout<<"How much do you pay a month for your car's gas?"<<endl;
    cin>>gas;
    cout<<"How much do you pay a month for your car's oil?"<<endl;
    cin>>oil;
    cout<<"How much do you pay a month for your car's tires?"<<endl;
    cin>>tires;
    cout<<"How much do you pay a month for your car's maintenance?"<<endl;
    cin>>mainten;
  //calculate the monthly payments
    monthly=loanpay+insure+gas+oil+tires+mainten;
  //calculate the yearly payments
    yearly=monthly*12;
  //output the results
    cout<<setprecision(2)<<fixed;
    cout<<"Your monthly expenses are $"<<monthly<<" and your yearly expenses are $"<<yearly<<endl;       
    
  //Exit Stage Right
    return 0;
}

