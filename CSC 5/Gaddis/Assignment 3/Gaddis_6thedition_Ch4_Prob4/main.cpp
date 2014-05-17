/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 29, 2014, 9:01 PM
 * write a program that will ask for the length and width of two rectangles
 * and then tell the user which rectangle has the greater area
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    float w1, l1, a1, w2, l2, a2;
  
  //output the initial questions  
    cout<<"Input the width of the first triangle"<<endl;
    cin>>w1;
    cout<<"Input the length of the first triangle"<<endl;
    cin>>l1;
    cout<<"Input the width of the second triangle"<<endl;
    cin>>w2;
    cout<<"Input the length of the second triangle"<<endl;
    cin>>l2;
  //calculate the area of the rectangles  
    a1=w1*l1;
    a2=w2*l2;
  //set up if statement that will determine which rectangle has the larger area
  //and output the results
    if (a1>a2){
        cout<<"The area of the first rectangle is "<<a1<<" making it larger then the second"<<endl;
        cout<<"rectangle which has an area of "<<a2<<endl;
    }
    else {
      cout<<"The area of the second rectangle is "<<a2<<" making it larger then the first"<<endl;
      cout<<"rectangle which has an area of "<<a1<<endl;  
    }        
    
  //Exit Stage Right  
    return 0;
}

