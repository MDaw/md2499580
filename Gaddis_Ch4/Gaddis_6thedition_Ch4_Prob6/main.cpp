/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 29, 2014, 9:36 PM
 * write a program that will calculate and display the weight of an object based
 * on only the mass(which the user will provide). then display a message 
 * depending on how many Newtons the object is
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution BEgins Here
int main(int argc, char** argv) {
  //Declare Variables
    float mass, weight;
    
  //Output the initial questions  
    cout<<"Input the object's mass (in kilograms)"<<endl;
    cin>>mass;
  //Calculate and display the weight  
    weight=mass*9.8;
    cout<<"its weight would be "<<weight<<" Newtons"<<endl;
  //If statement that will determine whether or not the object is heavy or light  
    if (weight>1000){
       cout<<"this object is too heavy"<<endl;  
     }
    if (weight<10){
       cout<<"this object is too light"<<endl;  
     }  
  //Exit Stage Right  
    return 0;
}

