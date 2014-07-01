/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on February 2, 2014, 6:37 PM
 * write a program that will calculate the theater's gross income and the 
 * net box office profit for a night
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
    float adult, child, Amon, Cmon, gross, netbox, dis;
    char movie[100];
    
  //output initial questions 
    cout<<"Please input the movie's title"<<endl;
    cin.getline(movie,100);
    cout<<"Please input how many adult tickets were sold for this particular movie:"<<endl;
    cin>>Amon;
    cout<<"next input how many child tickets were sold:"<<endl;
    cin>>Cmon;
  //calculate how much $$$ the theater made  
    adult=Amon*6;
    child=Cmon*3;
    gross=adult+child;
    netbox=gross*0.2;
    dis=gross*0.8;
  //output the results
    cout<<setprecision(2)<<fixed;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Movie Name:                    "<<movie<<endl;
    cout<<"Adult Tickets Sold:            $"<<adult<<endl;
    cout<<"Child Tickets Sold:            $"<<child<<endl;
    cout<<"Gross Box Office Profit:       $"<<gross<<endl;
    cout<<"Net Box Office Profit:         $"<<netbox<<endl;
    cout<<"Amount Paid toDistributor:     $"<<dis<<endl;
    cout<<"-------------------------------------------------"<<endl;

  //Exit Stage Right  
    return 0;
}

