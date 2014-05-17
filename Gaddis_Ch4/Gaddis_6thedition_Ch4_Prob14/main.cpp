/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on April 19, 2014, 8:45 PM
 * write a program that will determine who can in first, second and third
 * in a race
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Global constants

//Function Prototypes

//execution Begins Here
int main(int argc, char** argv) {
    
  //Declare Variables
    int size=21;
    char name1[size], name2[size], name3[size];
    float time1, time2,time3;
  //get the first runner's info
    cout<<"What is the first runner's name and time (in minutes)?"<<endl;
    cin>>name1>>time1;
  //get the second runner's info
    cout<<"What is the second runner's name and time (in minutes)?"<<endl;
    cin>>name2>>time2;    
  //get the third runner's info
    cout<<"What is the third runner's name and time (in minutes)?"<<endl;
    cin>>name3>>time3;
  //set up formatting
    cout<<setprecision(2)<<fixed; 
  //if the first runner gets first place  
    if (time1<time2&&time1<time3){
        cout<<"First place goes to "<<name1<<" with a time of "<<time1<<endl;
        if (time2<time3){
            cout<<"Second place goes to "<<name2<<" with a time of "<<time2<<endl;
            cout<<"and third place goes to "<<name3<<" with a time of "<<endl;
            cout<<time3<<" minutes"<<endl;
        }else{
            cout<<"Second place goes to "<<name3<<" with a time of "<<time3<<endl;
            cout<<"and third place goes to "<<name2<<" with a time of "<<endl;
            cout<<time2<<" minutes"<<endl;
        }
     }
  //if the second runner gets first place  
    if (time2<time1&&time2<time3){
        cout<<"First place goes to "<<name2<<" with a time of "<<time2<<endl;
        if (time1<time3){
            cout<<"Second place goes to "<<name1<<" with a time of "<<time1<<endl;
            cout<<"and third place goes to "<<name3<<" with a time of "<<endl;
            cout<<time3<<" minutes"<<endl; 
        }else{
            cout<<"Second place goes to "<<name3<<" with a time of "<<time3<<endl;
            cout<<"and third place goes to "<<name1<<" with a time of "<<endl;
            cout<<time1<<" minutes"<<endl;
        }
     }
  //if the third runner gets first place    
     if (time3<time1&&time3<time2){
        cout<<"First place goes to "<<name3<<" with a time of "<<time3<<endl;
        if (time1<time2){
            cout<<"Second place goes to "<<name1<<" with a time of "<<time1<<endl;
            cout<<"and third place goes to "<<name2<<" with a time of "<<endl;
            cout<<time2<<" minutes"<<endl;
        }else{
            cout<<"Second place goes to "<<name2<<" with a time of "<<time2<<endl;
            cout<<"and third place goes to "<<name1<<" with a time of "<<endl;
            cout<<time1<<" minutes"<<endl;
        }
     }   
  //exit Stage Right  
    return 0;
}

