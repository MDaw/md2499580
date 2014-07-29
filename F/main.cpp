/* 
 * File:   main.cpp
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;
void Problem1();
void Problem2();
void Problem3();
void Problem4();
void Problem5();
void Problem6();
short rev(unsigned short num, unsigned short n = 0);
void fillVec(int size);
void prntVec(vector<int>,vector<int>, int size);
void prntVec(unsigned short arr[][2]);


int main(int argc, char** argv) {
    char prob;
    char cond;
    do{
    cout << "Enter the Problem you wish to see: " << endl;
    cin >> prob;
    
    switch(prob){
        case '1':{ Problem1(); break;}
        case '2':{ Problem2(); break;}
        case '3':{ Problem3(); break;}
        case '4':{ Problem4(); break;}
        case '5':{ Problem5(); break;}
        case '6':{ Problem6(); break;}
    }
    cout << "Another Problem? Y/N" << endl;
    cin >> cond;
    }while(cond == 'Y' || cond == 'y');
    return 0;
}
void Problem1(){
    unsigned short num = 0;
    unsigned short reve = 0;
    cout << "Enter the number" << endl;
    cin >> num;
    reve = rev(num,0);
    if(reve ==  32,767){
        cout << "Falls outside the bounds of unsigned short! no conversion possible" << endl;
    }
    else{
    cout << reve << endl;
    }
    
}
void Problem2(){
            short ans, guess, count = 0; //Random generated answer based on seed, and the guess inputed by user, counter to track number of guesses
            char cond;
            unsigned short seed; //Seed for the random generator
            seed = time(0);
            srand(seed);
            //Calculations for random answer
            do{
            ans = rand() % 1000 + 1;
            //Get user input
            cout << "I have a number between 1 and 1000 " << 
                    "Can you guess my number?  You will be " << 
                    "given a maximum of 10 guesses. " <<
                    "Please type your first guess. " << endl;
            cin >> guess;
            while(guess != ans){//Loop until the guess is correct
                if(count == 10){ break; }     
                if(guess < ans){
                    cout << "Too low.  Try again ";
           
                    cin >> guess;
                }
                else{
                    cout << "Too High. Try again ";
                    cin >> guess;
                }
                  count++;
            
        }
            if(count == 10){ cout << "Too many tries" << endl; }
            else{ cout << "Congratulations you have won the game!" << endl; }
            cout << "Would you like to play again? (y or n)" << endl;
            cin >> cond;
            }while(cond == 'y' || cond == 'Y');
            
}
void Problem3(){
    int size; 
    cout << "Enter the size of the vector" << endl;
    cin >> size;
    fillVec(size);
}
void Problem4(){
    cout << "Problem 4" << endl;
}
void Problem5(){
    cout << "Problem 5" << endl;
}
void Problem6(){
    cout << "Problem 6" << endl;
}

short rev(unsigned short num,unsigned short n){
    if(num == 0){
        return n;
    }
    else{
        unsigned short digit = num % 10;
        unsigned short prefix = n*10 + digit;
        return rev(num/10,prefix);
    }
}

void fillVec(int size){
    vector<int> even(size);
    vector<int> odd(size);
    unsigned short seed;
    seed = time(0);
    srand(seed);
    
    unsigned short num = rand() % 90 + 10;
    short l = 0;
    short k = 0;
    while(k < even.size() || l < odd.size()){
        num = (rand() % 100 + 10) - 10;
        if(num % 2 == 0 && k < size){
            even[k] = num;
            cout << even[k] << endl;
            k++;
        }
        if(num % 2 != 0 && l < size){
            odd[l] = num;
            cout << odd[1];
            l++;
        }
    }
    prntVec(even,odd, size);
}

void fillArr(int size){
    unsigned short arr[2][size];
    unsigned short seed;
    seed = time(0);
    srand(seed);
    
    unsigned short num = rand() % 90 + 10;
    short l = 0;
    short k = 0;
    
        while(k < size || l < size){
        num = (rand() % 90 + 10);
        if(num % 2 == 0 && k < size){
            arr[0][k] = num;
            k++;
        }
        if(num % 2 != 0 && l < size){
            arr[l][k] = num;
            l++;
        }
    }
    
}

void prntVec(vector<int> even,vector<int> odd, int size){
    cout << setw(3) << "Vector of random numbers" << endl;
    cout << string(30,'-') << endl;
    cout << "Even" << setw(6) << "Odd" << endl << endl;
    for(int i = 0; i < size; i++){
        cout << even[i] << setw(7) << odd[i] << endl;
    }
    cout << endl;
}

void prntArr(unsigned short arr[][2]){
    
}