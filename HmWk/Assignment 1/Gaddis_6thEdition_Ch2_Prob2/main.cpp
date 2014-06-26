/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on June 25, 2014, 7:34 PM
 * write a program to determine how much of the $4.6 million that the company made, 
 * came from the east coast division of the company (based on the fact that they 
 * generate 63% of total sales)
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    float TotPer=0.62, TotSale=4600000, EastPer;
  
  //Calculate how much of the 4.6 million was made by the east coast division
    EastPer=TotSale*TotPer;
  //output the results
    cout<<"If the company made $4.6 million in one year then $"<<setprecision(2)<<fixed<<EastPer<<endl;
    cout<<"was made by the east coast based on the fact that they generate"<<endl;
    cout<<"62% of the company's annual sales."<<endl;
   
  //Exit Stage Right  
    return 0;
}

