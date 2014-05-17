/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on February 4, 2014, 9:16 AM
 * wrtie a program
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    float TC, sale, CStax, SStax, TStax;
    int year;
    char month[13];
    
  //output the initial question 
    cout<<"Please input the month and year (ex: February 2011):"<<endl;
    cin>>month>>year;
    cout<<"Now input the Total amount of income collected at the cash register,including tax:"<<endl;
    cin>>TC;
  //calculate the amount of sales and sales tax
    TStax=TC*0.06;
    CStax=TC*0.02;
    SStax=TC*0.04;
    sale=TC-TStax;
  //output the results
    cout<<"Month: "<<month<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Total Collected:     $"<<TC<<endl;
    cout<<"Sales:               $"<<sale<<endl;
    cout<<"County Sales Tax:    $"<<CStax<<endl;
    cout<<"State Sales Tax:     $"<<SStax<<endl;
    cout<<"Total Sales Tax:     $"<<TStax<<endl;
    
  //Exit Stage Right  
   return 0;
}

