/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on July 25, 2014, 12:44 AM
 * A game in which the user is playing rock, paper, scissors, lizard, spock
 * with the computer. it should utilize all of the constructs we have
 * learned up to this point, 
 * 
 * version 2 of project 1 for project 2
 */

//System Libraries
#include <iostream>//for output/input
#include <iomanip>//for formatting
#include <cstdlib>//For the random number generator
#include <ctime>//For the random number generator
#include <fstream>//to write to a file
using namespace std;
//Global Constants
//none

//Function Prototypes
void rock();
void paper();
void scissors();
void lizard();
void spock();

//Execution Begins Here
int main(int argc, char** argv) {
 //Declare Variables
   short plc;//the player's choice in the game
   char pet[30], color[13], cont1, cont2;//whether or not to continue playing the game
   int game;// determine which game the player wants to play
   int ttt[9];
 //get data for stats file   
   cout<<"lets get to know each other"<<endl;
   cout<<"First lets decide on a name"<<endl;
   cout<<"What is your favorite color?"<<endl;
   cin>>color;
   cout<<"What is you favorite animal? (30 character MAX)"<<endl;
   cin>>pet;
   cout<<"From now on you shall be known as......"<<endl;
   cout<<color<<pet<<endl;
   cout<<"Lucky You"<<endl;
   cout<<"Such Kind Parents"<<endl;
   cout<<"Now lets Play"<<endl;
   
 //ask the user which game they would like to play
   cout<<"You can choose between two games"<<endl;
   cout<<"input 1 for Tic Tac Toe or 2 or Rock Paper Scissors Lizard Spock "<<endl;
   cin>>game;
 //determine which game they will be playing  
   if(game==1){
     //do while loop so they can keep playing
       do{
          //Initialize the random number generator
            srand(static_cast<unsigned int>(time(0)));
          //Declare Variables
            int cc2=rand()%37+1;//random number generator (cc2=computer's choice)    
            for(int num=0; num<9; num++){
                 cout<<setw(21)<<left<<ttt[9]<<endl;
            }
            cout<<"    4 5 6"<<endl;
            cout<<endl;
            cout<<"1   * * *"<<endl;
            cout<<"2   * * *"<<endl;
            cout<<"3   * * *"<<endl;
          //start game by getting the user's input  
            cout<<"you get to go first"<<endl;
            cout<<"you are x the computer is o"<<endl;
            
          //ask the user to play again  
            cout<<"Do you want to play again?"<<endl;
            cout<<"Y or N"<<endl;
          //user will input y or n  
            cin>>cont1;  
            }while(cont1=='y'||cont1=='Y');
       
   }else if (game==2){
      //use a do while loop so it will run at least once and then ask the player 
      //if they want to play again   
        do{
          //Initialize the random number generator
            srand(static_cast<unsigned int>(time(0)));
          //Declare Variables
            int cc=rand()%5+1;//random number generator (cc=computer's choice)
            
          //output the initial question  
            cout<<"Welcome to Rock, Paper, Scissors, Spock"<<endl;
            cout<<"Please Input your choice"<<endl;
            cout<<"1=Rock, 2=Paper, 3=Scissors, 4=lizard, 5=Spock"<<endl;
          //The player choice 
            cin>>plc;
          //The player's choice 
            if(plc==1){
                cout<<color<<pet<<" chose Rock"<<endl;
            }
            else if(plc==2){
                cout<<color<<pet<<" chose Paper"<<endl;
            }
            else if(plc==3){
                cout<<color<<pet<<" chose Scissors"<<endl;
            }
            else if (plc==4){
                cout<<color<<pet<<" chose Lizard"<<endl;
            }
            else if (plc==5){
                cout<<color<<pet<<" chose Spock"<<endl;
            }            
            else{
             //Input Validation 
                while(plc<1||plc>3){
                   cout<<"I'm sorry "<<color<<pet<<" that is not a valid choice"<<endl;
                   cout<<"Try again"<<endl;
                   cout<<"Please input your choice:"<<endl;
                   cout<<"Rock=1, Paper=2, Scissors=3, 4=lizard, 5=Spock"<<endl; 
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
                paper();
            }
            else if (plc==1&&cc==3){
                cout<<"Rock Crushes Scissors"<<endl;
                cout<<color<<pet<<" won!"<<endl;
                rock();
            }
            else if (plc==1&&cc==4){
                cout<<"Rock crushes Lizard"<<endl;
                cout<<color<<pet<<" won!"<<endl;
                rock();
            }
            else if (plc==1&&cc==5){
                cout<<"Spock vaporizes Rock"<<endl;
                cout<<"The computer won!"<<endl;
                spock();
            }
            
          //Paper  
            else if (plc==2&&cc==1){
                cout<<"Paper covers Rock"<<endl;
                cout<<color<<pet<<" won!"<<endl;
                paper();
            }
            else if (plc==2&&cc==2){
                cout<<"We have a tie!"<<endl;
            }
            else if (plc==2&&cc==3){
                cout<<"Scissors cut Paper"<<endl;
                cout<<"The computer won!"<<endl;
                scissors();
            }
            else if (plc==2&&cc==4){
                cout<<"Lizard Eats Paper"<<endl;
                cout<<"The computer won!"<<endl;
                lizard();
            }
            else if (plc==2&&cc==5){
                cout<<"Paper disproves Spock's existence"<<endl;
                cout<<color<<pet<<" won!"<<endl;
                paper();
            }
            
          //Scissors  
            else if (plc==3&&cc==1){
                cout<<"Rock crushes Scissors"<<endl;
                cout<<"The computer won!"<<endl;
                rock();
            }
            else if (plc==3&&cc==2){
                cout<<"Scissors cut Paper"<<endl;
                cout<<color<<pet<<" won!"<<endl;
                scissors();
            }
            else if (plc==3&&cc==3){
                cout<<"We have a tie!"<<endl;
            }
            else if (plc==3&&cc==4){
                cout<<"Scissors decapitate Lizard"<<endl;
                cout<<color<<pet<<" won!"<<endl;
                scissors();
            }
            else if (plc==3&&cc==5){
                cout<<"Spock Smashes Scissors"<<endl;
                cout<<"The computer won!"<<endl;
                spock();
            }
            
          //Lizard  
            else if (plc==4&&cc==1){
                cout<<"Rock crushes Lizard"<<endl;
                cout<<"The computer won!"<<endl;
                rock();
            }
            else if (plc==4&&cc==2){
                cout<<"Lizard Eats Paper"<<endl;
                cout<<color<<pet<<" won!"<<endl;
                lizard();
            }
            else if (plc==4&&cc==3){
                cout<<"Scissors decapitate Lizard"<<endl;
                cout<<"The computer won!"<<endl;
                scissors();
            }
            else if (plc==4&&cc==4){
                cout<<"We have a tie!"<<endl;
            }
            else if (plc==4&&cc==5){
                cout<<"Lizard poisons Spock"<<endl;
                cout<<color<<pet<<" won!"<<endl;
                lizard();
            }
            
          //Spock  
            else if (plc==5&&cc==1){
                cout<<"Spock vaporizes Rock"<<endl;
                cout<<"The computer won!"<<endl;
                spock();
            }
            else if (plc==5&&cc==2){
                cout<<"Paper disproves Spock's existence"<<endl;
                cout<<color<<pet<<" won!"<<endl;
                paper();
            }
            else if (plc==5&&cc==3){
                cout<<"Spock Smashes Scissors"<<endl;
                cout<<color<<pet<<" won!"<<endl;
                spock();
            }
            else if (plc==5&&cc==4){
                cout<<"Lizard poisons Spock"<<endl;
                cout<<"The computer won!"<<endl;
                lizard();
            }
            else if (plc==5&&cc==5){
                cout<<"We have a tie!"<<endl;
            }
            else{
                cout<<"Error!!!"<<endl;
                cout<<"Try again (its not me its you)"<<endl;
            }
            
          //ask the user to play again  
            cout<<color<<pet<<" do you want to play again?"<<endl;
            cout<<"Y or N"<<endl;
          //user will input y or n  
            cin>>cont2;    
        }while(cont2=='y'||cont2=='Y');
        
   }else{
         cout<<"Sorry "<<color<<pet<<" That is not a valid option "<<endl;
         cout<<"Please Choose again"<<endl;
         cout<<"You can choose between two games"<<endl;
         cout<<"input 1 for Tic Tac Toe or 2 or Rock Paper Scissors Lizard Spock "<<endl;
   cin>>game;
   }
  //Exit Stage Right  
    return 0;
}

void rock(){
cout<<"              _______   "<<endl;
cout<<"          ---'   ____)  "<<endl;
cout<<"            (_____)     "<<endl;
cout<<"            (_____)     "<<endl;
cout<<"            (____)      "<<endl;
cout<<"      ---.__(___)       "<<endl;
}

void paper(){
cout<<"       __...--~~~~~-._   _.-~~~~~--...__  "<<endl;
cout<<"       //               `'                \\   "<<endl;
cout<<"      //                 |                 \\   "<<endl;
cout<<"     //__...--~~~~~~-._  |  _.-~~~~~~--...__\\   "<<endl;
cout<<"    //__.....----~~~~._| | /_.~~~~----.....__\\  "<<endl;
cout<<"  ======================|//====================   "<<endl;
cout<<"                      `---`   "<<endl;
}

void scissors(){
    
cout<<"   _      ,/'   "<<endl;
cout<<"  (_).  ,/'    "<<endl;
cout<<"   _  ::  "<<endl;
cout<<"  (_)'  `'  "<<endl;
cout<<"          '`  "<<endl;

}

void lizard(){
cout<<"           //\\   "<<endl;
cout<<"           p  q    "<<endl;
cout<<"      _|| \\  // ||_   "<<endl;
cout<<"        | //  \\ |     "<<endl;
cout<<"        '' |  | ''    "<<endl;
cout<<"           |  | ,/_   "<<endl;
cout<<"       _|, |  |//|     "<<endl;
cout<<"        /\\|  ;/    "<<endl;
cout<<"           |  |    "<<endl;
cout<<"            |.|   "<<endl;
cout<<"      .-.    | |   "<<endl;
cout<<"      `   '.__//    "<<endl;
cout<<"            `'`      "<<endl;
}

void spock(){
cout<<"        _   "<<endl;    
cout<<"       | | _   "<<endl;
cout<<"       | | |  / |  "<<endl;
cout<<"       | | | / /`|  "<<endl;
cout<<"       | | |/ / /  "<<endl;
cout<<"    |`|| '.' / /   "<<endl;
cout<<"     | |`-. '--|    "<<endl;
cout<<"      |    '   |   "<<endl;
cout<<"       |  .`  /   "<<endl;
cout<<"        |    |    "<<endl;
}
