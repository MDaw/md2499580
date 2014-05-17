/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on February 2, 2014, 6:23 PM
 * write a program that will ask the user for the amount of each types of seat sold
 * and then display the amount of income generated
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    float classA, classB, classC, seatA=15.0, seatB=12.0, seatC=9.0, totcash;
    
  //output the initial question
    cout<<"How many tickets were sold for the class A seats"<<endl;
    cin>>classA;
    cout<<"How many tickets were sold for the class B seats"<<endl;
    cin>>classB;
    cout<<"How many tickets were sold for the class C seats"<<endl;
    cin>>classC;
  //calculate the amount of income generated based off the info inputed  
    totcash=(seatA*classA)+(seatB*classB)+(seatC*classC);
  //output the results
    cout<<"The total amount of income generated,based off of the amount of seats sold, would be $"<<totcash<<endl;
  
    
  //Exit Stage Right  
    return 0;
}

