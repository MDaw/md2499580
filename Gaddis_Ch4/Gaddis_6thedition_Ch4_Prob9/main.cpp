/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on April 19, 2014, 2:10 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution BEgins Here
int main(int argc, char** argv) {
  //Declare Variables
    int ans;
  //output the initial question
    cout<<"Input the answer  to the following question: "<<endl;
    cout<<"   247"<<endl;
    cout<<"+  129"<<endl;
    cout<<"------"<<endl;
    cin>>ans;
    if (ans==376){
        cout<<"That is correct, Congratulations!!!"<<endl;
    }
    else{
        cout<<"That is incorrect, the answer is 376"<<endl;
    }
    
  //Exit Stage Right  
    return 0;
}

