/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 29, 2014, 9:12 PM
 * write a program that will calculate a person's BMI (body mass index)
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    float weight, height, BMI;
    
  //Output initial question
    cout<<"First input your weight(in pounds)"<<endl; 
    cin>>weight;
    cout<<"Next input your height(in inches)"<<endl;
    cin>>height;
  //Calculate the BMI using the inputed information 
    BMI=(weight*703)/(height*height);
    cout<<"you current Body Mass Index (BMI) is: "<<BMI<<endl;
  //Set up if statement to tell the user if they are healthy, over, or under weight  
    if (BMI<18.5){
        cout<<"Your BMI is under 18.5 meaning you are considered to be under weight"<<endl;
    }
    else if (BMI>25){
        cout<<"Your BMI is over 25 meaning you are considered to be overweight"<<endl;
    } 
    else{
        cout<<"Your BMI is between 18.5 and 25 so your BMI is considered average or optimal"<<endl;
    }
  //Exit Stage Right  
    return 0;
}

