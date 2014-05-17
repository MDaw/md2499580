/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 10, 2014, 6:06 PM
 * 
 */

#include <iostream>
using namespace std;

//Global Constants

//Functional Prototypes

//Execution begins Here

int main(int argc, char** argv) {
    //establish variables
    int number_of_pods, peas_per_pod, total_peas;
    
    //edit original program so that the first line says "Hello"
    cout<<"Hello"<<endl;
    
    //initial question
    cout<<"Enter the number of pods:"<<endl;
    cout<<"Press return after entering a number"<<endl;
    //user will put in the number of pods
    cin>>number_of_pods;
    //output next question 
    cout<<"Enter the number of peas in a pod: "<<endl;
    //user will input the number of peas per pod
    cin>>peas_per_pod;
    //establish the formula
    total_peas = number_of_pods * peas_per_pod;
    //output the final results
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods"<<endl;
    cout<<"and "<<endl;
    cout<<peas_per_pod;
    cout<<" peas in each pod, then"<<endl;
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all"<<endl;
    
    //edit original program so that the final line says "Good Bye"
    cout<<"Good Bye"<<endl;
    
    return 0;
}
