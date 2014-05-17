/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on March 24, 2014, 9:02 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
  //declare the random number//choose a year and output it
    int year=rand()%2001+1000;//1000,3000
    cout<<"The year is "<<year<<endl;
  //declare and calculate how many 100s, 100s, 10s, and 1s  
    int n1000, n100, n10, n1; 
    n1000=year/1000;
    year-=(n1000*1000);
    n100=year/100;
    year-=(n100*100);
    n10=year/10;
    year-=(n10*10);
    n1=year; 
  //output the number of 1000s in Roman numerals  
    switch(n1000){
        case 3:cout<<'M';
        case 2:cout<<'M';
        case 1:cout<<'M';
    }
  //output the number of 100s in Roman numerals  
    switch(n100){
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<"D";break;
        case 4:cout<<"CD";break;
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";
    }
  //output the number of 10s in Roman numerals
     switch(n10){
        case 9:cout<<"XC";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<"L";break;
        case 4:cout<<"XL";break;
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"X";
    }
   //output the number of 1s in Roman numerals
     switch(n1){
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";
    }     
  //Exit Stage Right  
    return 0;
}

