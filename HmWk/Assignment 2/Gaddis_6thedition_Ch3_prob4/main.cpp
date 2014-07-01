/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 18, 2014, 6:50 PM
 * write a program that will calculate the average rainfall for 3 months that 
 * will be inputed by the user
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
 //Declare Variables
   char month1[11],month2[11],month3[11];
   float m1rain,m2rain,m3rain,avgrain;
    
 //output initial questions 
   cout<<"Input the name of the first month"<<endl;
   cin>>month1;
   cout<<"input the amount of rainfall it had (in inches)"<<endl;
   cin>>m1rain;
   cout<<"Input the name of the second month"<<endl;
   cin>>month2;
   cout<<"Input the amount of rainfall they had (in inches)"<<endl;
   cin>>m2rain;
   cout<<"Input the name of the third month"<<endl;
   cin>>month3;
   cout<<"Input the amount of rainfall they had (in inches)"<<endl;
   cin>>m3rain;
 //calculate the average rainfall for 3 months
   avgrain=(m1rain+m2rain+m3rain)/3;
 //output the results
   cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<endl;
   cout<<"is "<<avgrain<<" inches"<<endl;
    
 //Exit Stage Right
    return 0;
}

