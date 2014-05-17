/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 25, 2014, 6:39 PM
 * loop until every integer is added together 
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    int num, count=1, sum=0;
  //output the initial question  
    cout<<"Please input a positive integer"<<endl;
    cin>>num;
  //input validation
    while (num<0){
        cout<<"That is not a valid input"<<endl;
        cout<<"Please input a positive integer"<<endl;
        cin>>num;
    }
  //calculate the sum of all numbers up to 'num'  
    while (count<num){
         sum+=num;
         count++;
    }
    cout<<"The sum of all integers up to "<<num<<" is "<<sum<<endl;
  //Exit Stage Right
    return 0;
}

