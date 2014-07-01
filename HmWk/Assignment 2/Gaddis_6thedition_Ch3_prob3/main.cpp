/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 18, 2014, 6:36 PM
 * write a program that will average out 5 test scores inputed by the user
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
 //Declare Variables
   int score1,score2,score3,score4,score5,avgSco;
    
 //Output initial question "type in 5 test scores to be averaged out"
   cout<<"Input 5 test scores"<<endl;
 //the user will input their 5 scores
   cin>>score1>>score2>>score3>>score4>>score5;
 //calculate the average test score based upon the scores that were inputed
   avgSco=(score1+score2+score3+score4+score5)/5;
 //output the average score
   cout<<"The average test score would be "<<avgSco<<endl;        
    
 //Exit Stage Right
    return 0;
}

