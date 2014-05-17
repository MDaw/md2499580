/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on February 2, 2014, 6:06 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    int surcus=12467, oneweek, prefer;
    
  //calculate and output the amount of customers who purchased energy drinks once or twice a week  
    oneweek=surcus*0.14;
    cout<<"The amount of customers who purchased an energy drink once or twice a week is "<<oneweek<<endl;
  //calculate and output the amount of customers who prefer the citrus flavored drinks
    prefer=surcus*0.64;
    cout<<"The amount of customers surveyed who prefer citrus flavored drinks was "<<prefer<<endl;
    
  //Exit Stage Right  
    return 0;
}

