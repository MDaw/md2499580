/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 19, 2014, 7:53 PM
 * write a program that will convert U.S dollars into Yens and Euros
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Global COnstants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
 //Declare Variables
   float dollar,yen,euro;
    
 //output the initial question
   cout<<"Input the amount of dollors you want converted to Yen and Euros:"<<endl;
 //the user will input the amount of dollars they want converted
   cin>>dollar;
 //convert dollars into yen
   yen=dollar*113.22;
 //convert dollars into euros
   euro=dollar*0.6936;
 //output the results
   cout<<setprecision(2)<<fixed;
   cout<<"$"<<dollar<<" U.S dollars is equivalent to $"<<yen<<" Japanese Yen"<<endl;
   cout<<"and $"<<euro<<" Euros."<<endl;
    
    //Exit Stage Right
    return 0;
}

