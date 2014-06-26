/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on June 25, 2014, 6:05 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  //Declare Variables
    const int NSIZE=25;//Note: this includes the null terminator
    const int ASIZE=60;//Note: this includes the null terminator
    char address[ASIZE];//Character Array (i.e character string)
    char name[NSIZE];//Character Array (i.e character string)
    char city[15],state[3],zip[6];
    char phone[14];
    
  //Input the Data
    cout<<"Input Your First Name"<<endl;
    cout<<"Formant First Name, Middle Initial, and Last Name"<<endl;
    cin.getline(name,NSIZE);
    cout<<"Input you address"<<endl;
    cout<<"Number, Street, Apt, POBox"<<endl;    
    cin.getline(address,ASIZE);
    cout<<"Input City, State, and Zip code"<<endl;
    cout<<"Format as: City XX DDDDD"<<endl;
    cin>>city>>state>>zip;
    cout<<"Telephone number (XXX)xxx-xxx-xxxx"<<endl;
    cin>>phone;
    
  //Output the Data  
    cout<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"City, State, Zip: "<<city<<" "<<state<<" "<<zip<<endl;
    cout<<"Telephone #: "<<phone<<endl;
  //Exit Stage Right  
    return 0;
}

