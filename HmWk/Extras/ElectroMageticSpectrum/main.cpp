/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on July 2, 2014, 7:02 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    float wl;
 
  //output the initial question
    cout<<"Input the wave Length"<<endl;
    cin>>wl;
  //Determine What type of wave it is and output
    if (wl>5){
        cout<<wl<<" is a radio wave"<<endl;
    }else if (wl>0.005){
        cout<<wl<<" is a microwave"<<endl;
    }else if (wl>0.000005){
        cout<<wl<<" is an infrared wave"<<endl;
    }else if (wl>0.0000005){
        cout<<wl<<" is a Visible wave"<<endl;
    }else if (wl>0.000000001){
        cout<<wl<<" is an Ultraviolet wave"<<endl;
    }else if (wl>0.00000000001){
        cout<<wl<<" is a X-Ray wave"<<endl;
    }else{
        cout<<wl<<" is a Gamma wave"<<endl;
    }
     
  //Exit Stage Right
    return 0;
}

