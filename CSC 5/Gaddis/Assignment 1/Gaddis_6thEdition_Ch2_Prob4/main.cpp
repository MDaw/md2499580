/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * write a program that will calculate the total sales tax(6.75%) on a $44.50 
 * meal along with the tip, which would be 15% of the total(meal+Sales tax)
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
    float meal=44.50, tax=0.0672, TotTax, mt, tip;
  
  //First calculate the Total Sales Tax
     TotTax=meal*tax;
  //the total cost of the meal with its tax is:
     mt=meal+TotTax;
  //now Calculate the tip
     tip=mt*0.15;
  //now output the results
     cout<<"The total sales tax of a meal that costs $44.50 is $"<<setprecision(2)<<fixed<<TotTax<<endl;
     cout<<"(with a sales tax of 6.72%). The tip would be $"<<tip<<endl;
     cout<<"(with the tip being 15% of the total cost of the meal along with the total sales tax)"<<endl;
     
  //Exit Stage Right  
    return 0;
}

