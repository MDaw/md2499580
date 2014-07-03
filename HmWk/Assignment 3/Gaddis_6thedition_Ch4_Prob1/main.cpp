/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 29, 2014, 7:52 PM
 * write a program that will determine which inputed number is larger
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   //Declare Variables
     int num1, num2;
   
   //output the initial question
     cout<<"Input the first integer"<<endl; 
     cin>>num1;
     cout<<"Input the second integer"<<endl; 
     cin>>num2;
   //determine which one is larger then output it   
     if (num1>num2){
       cout<<num1<<" is larger then "<<num2<<endl;  
     }
     else{
         cout<<num2<<" is larger then "<<num1<<endl;
     }
     
   //Exit Stage Right 
    return 0;
}

