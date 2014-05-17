/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on May 7, 2014, 9:44 AM
 * A game in which the user is playing rock, paper, scissors with the computer.
 * it should utilize all of the constructs we have learned up to this point, 
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Global Constants
//none

//Function Prototypes
//none

//Execution Begins Here

int main(int argc, char** argv) {
  //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
  //Declare Variables
    int cc=rand()%3+1;//random number generator (cc=computer's choice))
    int plc;//the player's choice in the game
    char cont;//whether or not to continue playing the game
    
  //use a do while loop so it will run at least once and then ask the player 
  //if they want to play again   
    do{
      //output the initial question  
        cout<<"Please input your choice:"<<endl;
        cout<<"Rock=1, Paper=2, Scissors=3"<<endl;
      //the player will input their choice  
        cin>>plc; 
      //the player's choice 
        if(plc==1){
            cout<<"You chose rock"<<endl;
        }else if(plc==2){
            cout<<"You chose paper"<<endl;
        }else if(plc==3){
            cout<<"You chose scissors"<<endl;
        }else{
          //input validation 
            while(plc<1||plc>4){
             cout<<"I'm sorry that is not a valid choice"<<endl;
             cout<<"Try again"<<endl;
             cout<<"Please input your choice:"<<endl;
             cout<<"Rock=1, Paper=2, Scissors=3"<<endl; 
             cin>>plc; 
            }
        }
      //The computer's choice  
        if (cc==1){
           cout<<"The computer chose rock"<<endl;
        }else if (cc==2){
            cout<<"The computer chose paper"<<endl;
        }else if(cc==3){
            cout<<"The computer chose scissors"<<endl;
        }
      //decide who the winer is and output the results
        if (plc==1&&cc==1){
            cout<<"We have a tie!"<<endl;
        }else if (plc==1&&cc==2){
            cout<<"The computer won!"<<endl;
        }else if (plc==1&&cc==3){
            cout<<"You won!"<<endl;
        }else if (plc==2&&cc==1){
            cout<<"You won!"<<endl;
        }else if (plc==2&&cc==3){
            cout<<"The computer won!"<<endl;
        }else if (plc==2&&cc==2){
            cout<<"We have a tie!"<<endl;
        }else if (plc==3&&cc==1){
            cout<<"The computer won!"<<endl;
        }else if (plc==3&&cc==2){
            cout<<"You won!"<<endl;
        }else if (plc==3&&cc==3){
            cout<<"We have a tie!"<<endl;
        }else{
            cout<<"Error!!!"<<endl;
            cout<<"Try again (its not me its you)"<<endl;
        }
      //ask the user to play again  
        cout<<"Do you want to play again?"<<endl;
        cout<<"Y or N"<<endl;
      //user will input y or n  
        cin>>cont;
        
    }while(cont=='y'||cont=='Y');
    
  //Exit Stage Right  
    return 0;
}

