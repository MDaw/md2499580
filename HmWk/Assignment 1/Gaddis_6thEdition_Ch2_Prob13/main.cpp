/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on June 25, 2014, 7:34 PM
 * write a program that will calculate the selling price of a circuit 
 * board that costs $12.67 to make with a 40% profit
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
    float board=12.67, profit=0.4, sellpri;
  
  //Calculate the selling price of the circuit board
    sellpri=board*profit;
  //output the results
    cout<<setprecision(2)<<fixed;
    cout<<"The selling price of a circuit board is $"<<sellpri<<endl;
    
  //Exit Stage Right  
    return 0;
}

