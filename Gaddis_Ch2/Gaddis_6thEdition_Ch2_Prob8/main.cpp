/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 30, 2014, 7:48 PM
 * write a program that will calculate someone's grocery total along with their tax
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
    float item1=12.95, item2=24.95, item3=6.95, item4=14.95, item5=3.95,
          total, tax, total2;  
    
  //calculate the total purchase cost
    total=item1+item2+item3+item4+item5;
    tax=total*0.06;
    total2=total+tax;
  //output the results
    cout<<setprecision(2)<<fixed;
    cout<<"-----------------Your Receipt--------------------"<<endl;
    cout<<"Item 1 = $"<<item1<<endl;                                               
    cout<<"Item 2 = $"<<item2<<endl;                                            
    cout<<"Item 3 = $"<<item3<<endl;                                        
    cout<<"Item 4 = $"<<item4<<endl;                                
    cout<<"Item 5 = $"<<item5<<endl;                               
    cout<<"The total cost of your items is $"<<total<<endl;
    cout<<endl;                                                         
    cout<<"Your tax is $"<<tax<<endl;                                   
    cout<<"Along with you tax your total would be $"<<total2<<endl;
    cout<<"-------------------------------------------------"<<endl;
       
  //Exit Stage Right  
    return 0;
}

