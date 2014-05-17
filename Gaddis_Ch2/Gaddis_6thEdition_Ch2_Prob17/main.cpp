/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on February 1, 2014, 6:46 PM
 * write a program that will calculate and display how much the stock costed and  
 * how much commission must be payed and the total cost
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare variables
    float stock=21.77, totstock, comiss=0.02, brocomis, totcost;
    
  //calculate and output the total cost of 600 shares of stock at $21.77
    totstock=21.77*600;
    cout<<"The total cost of 600 shares of stock (at $21.77 per share) is $"<<totstock<<endl;
  //calculate and output the total cost of the stock broker's commission
    brocomis=totstock*comiss;
    cout<<"The cost of the stock broker's commission (at 2%) is $"<<brocomis<<endl;
  //calculate and output the total cost of everything 
    totcost=brocomis+totstock;
    cout<<endl;
    cout<<"The total cost of Kathryn's investment would be $"<<totcost<<endl;

  //Exit Stage Right  
    return 0;
}

