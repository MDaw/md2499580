/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 19, 2014, 5:09 PM
 * write a program that will tell owners the minimum amount of insurance 
 * they need for their homes 
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
    float RepCost,MinIn;
  
  //output the initial question
    cout<<"How much is it going to cost you to repair your home?"<<endl;
    cin>>RepCost; 
  //calculate the 80% of the repair costs
    MinIn=RepCost*0.80;
  //output the results  
    cout<<setprecision(2)<<fixed;
    cout<<"The minimum amount of insurance you would need is $"<<MinIn<<endl;
 
      
  //Exit Stage Right
    return 0;
}

