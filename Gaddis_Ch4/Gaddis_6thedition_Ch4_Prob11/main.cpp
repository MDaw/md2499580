/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on April 19, 2014, 2:18 PM
 * write a program that will award points based on how many books were purchased   
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
 //Declare Variables
   int num;
 //Output the initial question   
   cout<<"Please Input the amount of books you have purchased"<<endl;
   cin>>num;
 //Award points based on how many books were purchased   
   if (num==0){
       cout<<"You purchased 0 books so you have earned 0 points"<<endl;
   }
   else if(num==1){
       cout<<"You purchased 1 book so you have earned 5 points"<<endl;
   }
   else if(num==2){
       cout<<"You purchased 2 books so you have earned 15 points"<<endl;
   }
   else if(num==3){
       cout<<"You purchased 3 books so you have earned 30 points"<<endl;
   }
   else if(num==4||num>4){
       cout<<"You purchased "<<num<<" books so you have earned 60 points"<<endl;
   }
   else{
       cout<<"That is not a valid input"<<endl;
   }
 //Exit Stage Right   
    return 0;
}

