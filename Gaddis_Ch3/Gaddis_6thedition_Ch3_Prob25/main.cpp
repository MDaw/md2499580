/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 19, 2014, 8:20 PM
 * write a program that is essentialy a word game
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   
   //Declare Variables
    char name[30],age[30],city[30],college[30],job[30],animal[30],petname[30]; 
    
   //output the initial question
    cout<<"To begin the game input your name, age, a city, the name of a college,"<<endl;
    cout<<"a job or profession, a type of animal, and a petname  of your choice (in that order)"<<endl;
   //the user will then input the requested information
    cin>>name>>age>>city>>college>>job>>animal>>petname;
   //output the word game
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<". "<<endl;
    cout<<"At the age of "<<age<<", "<<name<<" went to school at "<<college<<"."<<endl;
    cout<<name<<" graduated and went to work as a "<<job<<". Then, "<<name<<endl;
    cout<<" adopted a(n) "<<animal<<" named "<<petname<<". They both lived happily ever after!"<<endl;
    
   //Exit Stage Right 
    return 0;
}

