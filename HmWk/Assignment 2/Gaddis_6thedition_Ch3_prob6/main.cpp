/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 18, 2014, 7:48 PM
 * write a program that will calculate the weight of each individual pallet along
 * with the weight of each individual widget 
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
  //Declare Variables
    float pallet,PalWidg,NuWidg;
    int widget;
    
  //output initial question 
    cout<<"How many pounds (lb) does the pallet weigh by itself?"<<endl;
    cin>>pallet;
    cout<<"How many pounds does the pallet weigh with the widgets stacked on it?"<<endl;
    cout<<"NOTE TO THE USER: this number must be higher then 9.2 lbs"<<endl;
    cin>>PalWidg;
  //calculate how many widgets are on the pallet
    widget=(PalWidg-pallet)/9.2;
  //output the results
    cout<<"There are "<<widget<<" widgets on the pallet."<<endl;
    
  //Exit Stage Right
    return 0;
}

