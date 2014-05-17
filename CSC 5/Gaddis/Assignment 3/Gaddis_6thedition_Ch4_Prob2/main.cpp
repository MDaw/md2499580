/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 29, 2014, 8:06 PM
 * write a program that will take any inputed number between 1 and 10
 * and output it's corresponding Roman numeral 
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
    
 //output the initial question   
   cout<<"Input a number between 1 and 10"<<endl;
   cin>>num;
 //set up switch statement to switch the inputed number with its equivalent Roman numeral
   switch (num){
        case 1:{
            cout<<"its Roman numeral is: I"<<endl;
            break;
        }
        case 2:{
            cout<<"its Roman numeral is: II"<<endl;
            break;
        }
        case 3:{
            cout<<"its Roman numeral is: III"<<endl;
            break;
        }
        case 4:{
            cout<<"its Roman numeral is: IV"<<endl;
            break;
        }
        case 5:{
            cout<<"its Roman numeral is: V"<<endl;
            break;
        }
        case 6:{
            cout<<"its Roman numeral is: VI"<<endl;
            break;
        }
        case 7:{
            cout<<"its Roman numeral is: VII"<<endl;
            break;
        }
        case 8:{
            cout<<"its Roman numeral is: VIII"<<endl;
            break;
        }
        case 9:{
            cout<<"its Roman numeral is: IX"<<endl;
            break;
        }
        case 10:{
            cout<<"its Roman numeral is: X"<<endl; 
            break;
        }
        default:{
             cout<<"That is not a number between 1 and 10"<<endl;
         }
  }
//Exit Stage Right  
    return 0;
}

