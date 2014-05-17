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
   cout<<"Type in the name of the first month and the amount of rainfall they had (in inches)"<<endl;
   cin>>month1>>m1rain;
   cout<<"Type in the name of the second month and the amount of rainfall they had (in inches)"<<endl;
   cin>>month2>>m2rain;
   cout<<"Type in the name of the third month and the amount of rainfall they had (in inches)"<<endl;
   cin>>month3>>m3rain;
 //calculate the average rainfall for 3 months
   avgrain=(m1rain+m2rain+m3rain)/3;
 //output the results
   cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<endl;
   cout<<"is "<<avgrain<<" inches"<<endl;
    
    //Exit Stage Right
    return 0;
}

