/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on April 23, 2014, 9:42 AM
 */

//system Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    int num;
  //output the initial question   
    cout<<"Enter a number: "<<endl;
    cin>>num;
  //set up star system
    while(num>=1){
    cout<<'*';
    num--;
    }
  //Exit Stage Right  
    return 0;
}

