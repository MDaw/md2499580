/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on June 25, 2014, 7:34 PM
 * write a program that will calculate the miles a car gets per gallon
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   //Declare Variables
     float gal=20, MperG1=21.5, MperG2=26.8, TownDis, WayDis;
     
   //calculate the distance the car can travel in town and on the freeway with 1 tank of gas
     TownDis=gal*MperG1;
     WayDis=gal*MperG2;
   //output the results
     cout<<"The distance a car can go on a full tank of gas (20 gallons) in town is "<<TownDis<<endl;
     cout<<"miles and the distance it can go on the freeway with a full tank of gas is "<<WayDis<<endl;                       
                     
   //Exit Stage Right 
    return 0;
}

