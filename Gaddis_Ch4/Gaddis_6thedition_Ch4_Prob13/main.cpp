/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on April 19, 2014, 3:47 PM
 * write a program that will calculate shipping charges 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants

//function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    float kg, miles, fee1, fee2;
  //set up formating
    cout<<setprecision(2)<<fixed;
  //output the initial question
    cout<<"How much dose your package way (in Kilograms)?"<<endl;
    cin>>kg;
    cout<<"What is the distance (in Miles)"<<endl;
    cin>>miles;
  //calculate the shipping costs  
    if (kg>20||miles>3000||miles<10){
       cout<<"This company dose not ship package weighing over 20Kg  and "<<endl;
       cout<<"dose not ship to distances over 3,000 miles or less then 10 miles"<<endl; 
    }else if(kg==0){
       cout<<"'0' is not a valid weight"<<endl; 
    }else if (kg==2||kg<2){
       fee1=miles/500; 
       fee2=fee1*1.10;
       cout<<"Your shipping fees for the package weighing "<<kg<<" Kg and going the"<<endl;
       cout<<"distance of "<<miles<<" miles will be $"<<fee2<<endl;
    }else if (kg==6||kg>2){
       fee1=miles/500; 
       fee2=fee1*2.20;
       cout<<"Your shipping fees for the package weighing "<<kg<<" Kg and going the"<<endl;
       cout<<"distance of "<<miles<<" miles will be $"<<fee2<<endl;
    }else if (kg==10||kg>6){
       fee1=miles/500; 
       fee2=fee1*3.70;
       cout<<"Your shipping fees for the package weighing "<<kg<<" Kg and going the"<<endl;
       cout<<"distance of "<<miles<<" miles will be $"<<fee2<<endl;
    }else if (kg==20||kg>10){
       fee1=miles/500; 
       fee2=fee1*1.10;
       cout<<"Your shipping fees for the package weighing "<<kg<<" Kg and going the"<<endl;
       cout<<"distance of "<<miles<<" miles will be $"<<fee2<<endl;
    }else {
       cout<<"That is not a valid input"<<endl; 
    }
  //Exit Stage Right  
    return 0;
}

