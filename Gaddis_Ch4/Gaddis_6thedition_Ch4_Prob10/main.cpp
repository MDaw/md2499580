/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on March 26, 2014, 12:49 PM
 * write a program that will calculate a bulk discount 
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
    int unit;
    float tc, d1, d2, d3, d4;
 
  //output the initial question  
    cout<<"How many units were sold"<<endl; 
    cin>>unit;
  //calculate the bulk discount and output the total cost
    cout<<setprecision(2)<<fixed; 
    if (unit<10){
        tc=unit*99;
        cout<<"The total cost of your purchase is $"<<tc<<endl;
    }
    else if (unit>=10&&unit<=19){
        d1=(99*unit)*0.2;
        cout<<"The total cost of you purchase (including a 20% bulk discount) is $"<<d1<<endl;
    }
    else if(unit>=20&&unit<=49){
        d2=(99*unit)*0.3;
        cout<<"The total cost of you purchase (including a 30% bulk discount) is $"<<d2<<endl;
    }
    else if(unit>=50&&unit<=99){
        d3=(99*unit)*0.4;
        cout<<"The total cost of you purchase (including a 40% bulk discount) is $"<<d3<<endl;
    }
    else{
        d4=(99*unit)*0.5;
        cout<<"The total cost of you purchase (including a 50% bulk discount) is $"<<d4<<endl;
    }
  //Exit Stage Right  
    return 0;
}

