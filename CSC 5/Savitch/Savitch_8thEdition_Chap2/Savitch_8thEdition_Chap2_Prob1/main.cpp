/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 30, 2014, 6:40 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    float OZ, MT=35273.92, OZtoMT, ToGetMT, mtleft, oneMT;
    
  //Output the Initial Question
    cout<<"How many ounces is your favorite box of cereal?"<<endl;
    cin>>OZ;
  //convert the inputed ounces into metric tons
    OZtoMT=OZ/MT;
  //output the results
    cout<<"Your box of cereal is equivalent to "<<OZtoMT<<" metric tons!"<<endl;
  //calculate how many cereal boxes they need to get 1 metric ton
    mtleft=MT-OZtoMT;
    oneMT=OZtoMT/mtleft;
  //output the results
    cout<<"You would need "<<oneMT<<" boxes of cereal to get 1 metric ton!"<<endl;
    
  //Exit Stage Right  
    return 0;
}

