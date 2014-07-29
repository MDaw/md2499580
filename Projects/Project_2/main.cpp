/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on July 25, 2014, 12:44 AM
 * A game in which the user is playing rock, paper, scissors, lizard, spock
 * with the computer. it should utilize all of the constructs we have
 * learned up to this point, 
 * 
 * version 2 for project 2
 */

//System Libraries
#include <iostream>//for output/input
#include <cstdlib>//For the random number generator
#include <ctime>//For the random number generator
using namespace std;
//Global Constants
//none

//Function Prototypes
//none

//Execution Begins Here
int main(int argc, char** argv) {
 //Declare Variables
   short plc;//the player's choice in the game
   char cont;//whether or not to continue playing the game
      
  //use a do while loop so it will run at least once and then ask the player 
  //if they want to play again   
        do{
          //Initialize the random number generator
            srand(static_cast<unsigned int>(time(0)));

          //Declare Variables
            int cc=rand()%5+1;//random number generator (cc=computer's choice)
            
          //output the initial question  
            cout<<"Welcome to Rock, Paper, Scissors, Spock"<<endl;
            cout<<"Please input your choice:"<<endl;
            cout<<"1=Rock, 2=Paper, 3=Scissors, 4=lizard, 5=Spock"<<endl;
          //The player will input their choice  
            cin>>plc; 
            
          //The player's choice 
            if(plc==1){
                cout<<"You chose Rock"<<endl;
            }
            else if(plc==2){
                cout<<"You chose Paper"<<endl;
            }
            else if(plc==3){
                cout<<"You chose Scissors"<<endl;
            }
            else if (plc==4){
                cout<<"You chose Lizard"<<endl;
            }
            else if (plc==5){
                cout<<"You chose Spock"<<endl;
            }            
            else{
              //input validation 
                while(plc<1||plc>3){
                 cout<<"I'm sorry that is not a valid choice"<<endl;
                 cout<<"Try again"<<endl;
                 cout<<"Please input your choice:"<<endl;
                 cout<<"Rock=1, Paper=2, Scissors=3, 4=lizard, 5=Spock"<<endl; 
                 cin>>plc; 
                }
            }
            
          //The computer's choice  
            if (cc==1){
               cout<<"The computer chose Rock"<<endl;
            }
            else if (cc==2){
                cout<<"The computer chose Paper"<<endl;
            }
            else if(cc==3){
                cout<<"The computer chose Scissors"<<endl;
            }
            else if(cc==4){
                cout<<"The computer chose Lizard"<<endl;
            }            
            else if(cc==5){
                cout<<"The computer chose Spock"<<endl;
            }  
            
          //Decide who the winer is and output the results
          //Rock  
            if (plc==1&&cc==1){
                cout<<"We have a tie!"<<endl;
            }
            else if (plc==1&&cc==2){
                cout<<"Paper covers Rock"<<endl;
                cout<<"The computer won!"<<endl;
            }
            else if (plc==1&&cc==3){
                cout<<"Rock Crushes Scissors"<<endl;
                cout<<"You won!"<<endl;
            }
            else if (plc==1&&cc==4){
                cout<<"Rock crushes Lizard"<<endl;
                cout<<"You won!"<<endl;
            }
            else if (plc==1&&cc==5){
                cout<<"Spock vaporizes Rock"<<endl;
                cout<<"The computer won!"<<endl;
            }
            
          //Paper  
            else if (plc==2&&cc==1){
                cout<<"Paper covers Rock"<<endl;
                cout<<"You won!"<<endl;
            }
            else if (plc==2&&cc==2){
                cout<<"We have a tie!"<<endl;
            }
            else if (plc==2&&cc==3){
                cout<<"Scissors cut Paper"<<endl;
                cout<<"The computer won!"<<endl;
            }
            else if (plc==2&&cc==4){
                cout<<"Lizard Eats Paper"<<endl;
                cout<<"The computer won!"<<endl;
            }
            else if (plc==2&&cc==5){
                cout<<"Paper disproves Spock's existence"<<endl;
                cout<<"You won!"<<endl;
            }
            
          //Scissors  
            else if (plc==3&&cc==1){
                cout<<"Rock crushes Scissors"<<endl;
                cout<<"The computer won!"<<endl;
            }
            else if (plc==3&&cc==2){
                cout<<"Scissors cut Paper"<<endl;
                cout<<"You won!"<<endl;
            }
            else if (plc==3&&cc==3){
                cout<<"We have a tie!"<<endl;
            }
            else if (plc==3&&cc==4){
                cout<<"Scissors decapitate Lizard"<<endl;
                cout<<"You won!"<<endl;
            }
            else if (plc==3&&cc==5){
                cout<<"Spock Smashes Scissors"<<endl;
                cout<<"The computer won!"<<endl;
            }
            
          //Lizard  
            else if (plc==4&&cc==1){
                cout<<"Rock crushes Lizard"<<endl;
                cout<<"The computer won!"<<endl;
            }
            else if (plc==4&&cc==2){
                cout<<"Lizard Eats Paper"<<endl;
                cout<<"You won!"<<endl;
            }
            else if (plc==4&&cc==3){
                cout<<"Scissors decapitate Lizard"<<endl;
                cout<<"The computer won!"<<endl;
            }
            else if (plc==4&&cc==4){
                cout<<"We have a tie!"<<endl;
            }
            else if (plc==4&&cc==5){
                cout<<"Lizard poisons Spock"<<endl;
                cout<<"You won!"<<endl;
            }
            
          //Spock  
            else if (plc==5&&cc==1){
                cout<<"Spock vaporizes Rock"<<endl;
                cout<<"The computer won!"<<endl;
            }
            else if (plc==5&&cc==2){
                cout<<"Paper disproves Spock's existence"<<endl;
                cout<<"You won!"<<endl;
            }
            else if (plc==5&&cc==3){
                cout<<"Spock Smashes Scissors"<<endl;
                cout<<"You won!"<<endl;
            }
            else if (plc==5&&cc==4){
                cout<<"Lizard poisons Spock"<<endl;
                cout<<"The computer won!"<<endl;
            }
            else if (plc==5&&cc==5){
                cout<<"We have a tie!"<<endl;
            }
            else{
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