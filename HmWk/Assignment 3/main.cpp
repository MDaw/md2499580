/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on April 9, 2014, 7:54 AM
 * Menu Assignment 3
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
//If not a Global Constant get an F

//Function Prototypes

//Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare menu variables
    int choice;
    bool exitMnu=false;
    //Loop until exit
    do{
        //Output Menu
        cout<<"Choose from the menu"<<endl;
        cout<<"1. Gaddis_6thEdition_Chap4_Prob1"<<endl;
        cout<<"2. Gaddis_6thEdition_Chap4_Prob2"<<endl;
        cout<<"3. Gaddis_6thEdition_Chap4_Prob3"<<endl;
        cout<<"4. Gaddis_6thEdition_Chap4_Prob4"<<endl;
        cout<<"5. Gaddis_6thEdition_Chap4_Prob5"<<endl;
        cout<<"6. Gaddis_6thEdition_Chap4_Prob6"<<endl; 
        cout<<"7. Gaddis_6thEdition_Chap4_Prob9"<<endl;
        cout<<"8. Gaddis_6thEdition_Chap4_Prob10"<<endl;
        cout<<"9. Gaddis_6thEdition_Chap4_Prob11"<<endl;  
        cout<<"10. Gaddis_6thEdition_Chap4_Prob13"<<endl;  
        cout<<"Anything Else to Exit"<<endl;
        //Input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            case 1:{
               //Declare Variables
                 int num1, num2;
                 
               //output problem title
                 cout<<"Gaddis_6thEdition_Chap4_Prob1"<<endl;  
               //output the initial question
                 cout<<"Input the first integer"<<endl; 
                 cin>>num1;
                 cout<<"Input the second integer"<<endl; 
                 cin>>num2;
               //determine which one is larger then output it   
                 if (num1>num2){
                   cout<<num1<<" is larger then "<<num2<<endl;  
                 }
                 else{
                     cout<<num2<<" is larger then "<<num1<<endl;
                     cout<<endl;
                 }
                break;
            }
            case 2:{
                 //Declare Variables
                   int num;

                 //output problem title
                   cout<<"Gaddis_6thEdition_Chap4_Prob2"<<endl;
                 //output the initial question   
                   cout<<"Input a number between 1 and 10"<<endl;
                   cin>>num;
                 //set up switch statement to switch the inputed number with its equivalent Roman numeral
                   switch (num){
                        case 1:{
                            cout<<"its Roman numeral is: I"<<endl;
                            break;
                        }
                        case 2:{
                            cout<<"its Roman numeral is: II"<<endl;
                            break;
                        }
                        case 3:{
                            cout<<"its Roman numeral is: III"<<endl;
                            break;
                        }
                        case 4:{
                            cout<<"its Roman numeral is: IV"<<endl;
                            break;
                        }
                        case 5:{
                            cout<<"its Roman numeral is: V"<<endl;
                            break;
                        }
                        case 6:{
                            cout<<"its Roman numeral is: VI"<<endl;
                            break;
                        }
                        case 7:{
                            cout<<"its Roman numeral is: VII"<<endl;
                            break;
                        }
                        case 8:{
                            cout<<"its Roman numeral is: VIII"<<endl;
                            break;
                        }
                        case 9:{
                            cout<<"its Roman numeral is: IX"<<endl;
                            break;
                        }
                        case 10:{
                            cout<<"its Roman numeral is: X"<<endl; 
                            break;
                        }
                        default:{
                             cout<<"That is not a number between 1 and 10"<<endl;
                        }
                     cout<<endl;   
                  }
                
                break;
            }
            case 3:{
                  //Declare Variables
                    int month, day, year;
                    
                  //output problem title
                    cout<<"Gaddis_6thEdition_Chap4_Prob3"<<endl;
                  //output the initial question and have the user input their data
                    cout<<"Input a month (in  numerical format)"<<endl;
                    cin>>month; 
                    cout<<"Now enter the day"<<endl;
                    cin>>day;
                    cout<<"Now enter the last two digits of any year (ex: 1960 input 60)"<<endl;
                    cin>>year; 
                  //if the month*day is equal to the last two digits of the year it is a magic date  
                    if (year==(day*month)){
                        cout<<month<<"/"<<day<<"/"<<year<<" is a magic date!"<<endl;
                    }else{
                        cout<<month<<"/"<<day<<"/"<<year<<" is not a magic date"<<endl;
                    }
                    cout<<endl;
                break;
            }
            case 4:{
                  //Declare Variables
                    float weight, height, BMI;
                    
                  //output problem title
                    cout<<"Gaddis_6thEdition_Chap4_Prob4"<<endl;
                  //Output initial question
                    cout<<"First input your weight(in pounds)"<<endl; 
                    cin>>weight;
                    cout<<"Next input your height(in inches)"<<endl;
                    cin>>height;
                  //Calculate the BMI using the inputed information 
                    BMI=(weight*703)/(height*height);
                    cout<<"you current Body Mass Index (BMI) is: "<<BMI<<endl;
                  //Set up if statement to tell the user if they are healthy, over, or under weight  
                    if (BMI<18.5){
                        cout<<"Your BMI is under 18.5 meaning you are considered to be under weight"<<endl;
                    }else if (BMI>25){
                        cout<<"Your BMI is over 25 meaning you are considered to be overweight"<<endl;
                    }else{
                        cout<<"Your BMI is between 18.5 and 25 so your BMI is considered average or optimal"<<endl;
                    }
                    cout<<endl;
                break;
            }
            case 5:{
                  //Declare Variables
                    float weight, height, BMI;

                  //output problem title
                    cout<<"Gaddis_6thEdition_Chap4_Prob5"<<endl;
                  //Output initial question
                    cout<<"First input your weight(in pounds)"<<endl; 
                    cin>>weight;
                    cout<<"Next input your height(in inches)"<<endl;
                    cin>>height;
                  //Calculate the BMI using the inputed information 
                    BMI=(weight*703)/(height*height);
                    cout<<"you current Body Mass Index (BMI) is: "<<BMI<<endl;
                  //Set up if statement to tell the user if they are healthy, over, or under weight  
                    if (BMI<18.5){
                        cout<<"Your BMI is under 18.5 meaning you are considered to be under weight"<<endl;
                    }else if (BMI>25){
                        cout<<"Your BMI is over 25 meaning you are considered to be overweight"<<endl;
                    }else{
                        cout<<"Your BMI is between 18.5 and 25 so your BMI is considered average or optimal"<<endl;
                    }
                    cout<<endl;  
                break;
            }
            case 6:{
                  //Declare Variables
                    float mass, weight;

                  //output problem title
                    cout<<"Gaddis_6thEdition_Chap4_Prob6"<<endl;
                  //Output the initial questions  
                    cout<<"Input the object's mass (in kilograms)"<<endl;
                    cin>>mass;
                  //Calculate the weight in Newtons
                    weight=mass*9.8;
                  //If statement that will determine whether or not the object is heavy or light  
                    if (weight>1000){
                       cout<<"this object is too heavy"<<endl;  
                    }else if (weight<10){
                       cout<<"this object is too light"<<endl;  
                    }else{
                       cout<<"its weight in Newtons is "<<weight<<endl; 
                    }  
                    cout<<endl;
                break;
            }
            case 7:{
                  //Declare Variables
                    int ans;
                    
                  //output problem title
                    cout<<"Gaddis_6thEdition_Chap4_Prob9"<<endl;  
                  //output the initial question
                    cout<<"Input the answer  to the following question: "<<endl;
                    cout<<"   247"<<endl;
                    cout<<"+  129"<<endl;
                    cout<<"------"<<endl;
                    cin>>ans;
                    if (ans==376){
                        cout<<"That is correct, Congratulations!!!"<<endl;
                    }else{
                        cout<<"That is incorrect, the answer is 376"<<endl;
                    }
                    cout<<endl;
                break;
            }
            case 8:{
                  //Declare Variables
                    int unit;
                    float tc, d1, d2, d3, d4;
            
                  //output problem title
                    cout<<"Gaddis_6thEdition_Chap4_Prob10"<<endl;
                  //output the initial question  
                    cout<<"How many units were sold"<<endl; 
                    cin>>unit;
                  //calculate the bulk discount and output the total cost
                    cout<<setprecision(2)<<fixed; 
                    if (unit<10){
                        tc=unit*99;
                        cout<<"The total cost of your purchase is $"<<tc<<endl;
                    }else if (unit>=10&&unit<=19){
                        d1=(99*unit)*0.2;
                        cout<<"The total cost of you purchase (including a 20% bulk discount) is $"<<d1<<endl;
                    }else if(unit>=20&&unit<=49){
                        d2=(99*unit)*0.3;
                        cout<<"The total cost of you purchase (including a 30% bulk discount) is $"<<d2<<endl;
                    }else if(unit>=50&&unit<=99){
                        d3=(99*unit)*0.4;
                        cout<<"The total cost of you purchase (including a 40% bulk discount) is $"<<d3<<endl;
                    }else{
                        d4=(99*unit)*0.5;
                        cout<<"The total cost of you purchase (including a 50% bulk discount) is $"<<d4<<endl;
                    }
                    cout<<endl;
                break;
            }
            case 9:{
                 //Declare Variables
                   int num;
                   
                 //output problem title
                   cout<<"Gaddis_6thEdition_Chap4_Prob11"<<endl;
                 //Output the initial question   
                   cout<<"Please Input the amount of books you have purchased"<<endl;
                   cin>>num;
                 //Award points based on how many books were purchased   
                   if (num==0){
                       cout<<"You purchased 0 books so you have earned 0 points"<<endl;
                   }else if(num==1){
                       cout<<"You purchased 1 book so you have earned 5 points"<<endl;
                   }else if(num==2){
                       cout<<"You purchased 2 books so you have earned 15 points"<<endl;
                   }else if(num==3){
                       cout<<"You purchased 3 books so you have earned 30 points"<<endl;
                   }else if(num==4||num>4){
                       cout<<"You purchased "<<num<<" books so you have earned 60 points"<<endl;
                   }else{
                       cout<<"That is not a valid input"<<endl;
                   }
                   cout<<endl;
                break;
            }
            case 10:{
                  //Declare Variables
                    float kg, miles, fee1, fee2;
                    
                  //output problem title
                    cout<<"Gaddis_6thEdition_Chap4_Prob13"<<endl;  
                  //set up formating
                    cout<<setprecision(2)<<fixed;
                  //output the initial question
                    cout<<"How much dose your package way (in Kilograms)?"<<endl;
                    cin>>kg;
                    cout<<"What is the distance (in Miles)"<<endl;
                    cin>>miles;
                  //calculate the shipping costs  
                    if (kg>20||miles>3000||miles<10){
                       cout<<"This company dose not ship package weighing over 20Kg  and "<<endl;
                       cout<<"dose not ship to distances over 3,000 miles or less then 10 miles"<<endl; 
                    }else if(kg==0){
                       cout<<"'0' is not a valid weight"<<endl; 
                    }else if (kg==2||kg<2){
                       fee1=miles/500; 
                       fee2=fee1*1.10;
                       cout<<"Your shipping fees for the package weighing "<<kg<<" Kg and going the"<<endl;
                       cout<<"distance of "<<miles<<" miles will be $"<<fee2<<endl;
                    }else if (kg==6||kg>2){
                       fee1=miles/500; 
                       fee2=fee1*2.20;
                       cout<<"Your shipping fees for the package weighing "<<kg<<" Kg and going the"<<endl;
                       cout<<"distance of "<<miles<<" miles will be $"<<fee2<<endl;
                    }else if (kg==10||kg>6){
                       fee1=miles/500; 
                       fee2=fee1*3.70;
                       cout<<"Your shipping fees for the package weighing "<<kg<<" Kg and going the"<<endl;
                       cout<<"distance of "<<miles<<" miles will be $"<<fee2<<endl;
                    }else if (kg==20||kg>10){
                       fee1=miles/500; 
                       fee2=fee1*1.10;
                       cout<<"Your shipping fees for the package weighing "<<kg<<" Kg and going the"<<endl;
                       cout<<"distance of "<<miles<<" miles will be $"<<fee2<<endl;
                    }else {
                       cout<<"That is not a valid input"<<endl; 
                    }
                    cout<<endl;
                break;
            }            
            default: exitMnu=true;
        }
    }while(!exitMnu);
    //Exit the program
    return 0;
}