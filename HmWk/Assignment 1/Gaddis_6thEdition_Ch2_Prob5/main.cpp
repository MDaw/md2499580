/* 
 * File:   main.cpp
 * Author: Marwah 
 * Created on June 25, 2014, 7:34 PM
 * write a program that will find the average of a series of values
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    int v1=28,v2=32,v3=37,v4=24,v5=33,sum,avg;
    
  //calculate the average of the 5 stored variables
    sum=v1+v2+v3+v4+v5;
    avg=sum/5;
  //output the results
    cout<<"The average of 28,32,37,24, and 33 would be "<<avg<<endl;
    
  //Exit Stage Right  
    return 0;
}

