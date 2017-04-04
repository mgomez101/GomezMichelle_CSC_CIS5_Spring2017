/* 
 * File:   main.cpp
 * Author: Michelle Gomex
 * Created on April 3, 2017, 7:57 PM
 * Purpose:  Allows user to select math operation .
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <cstdlib>  //Random Number Generator
#include <iomanip>  //Formatting library
#include <ctime>    //Set RNG seed

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    srand(static_cast<unsigned int>(time(0))); //Seeding the RNG
    
    //Declare variables
    int op1, op2, result, answer;
    char choice
    
    //Initialize variables
    
    //Input data
    do
    {
        cout<<"Math Tutor"<<endl;
        cout<<"Choose the operation * | / | + | - | or anything else to exit"<<endl;
        cin>>choice;
        cout<<endl;
        if(!(choice=='+' || choice =='-' || choice '*'|| choice '/'))
        {
            cout<<"Exit the Math Tutor"<<endl;
            exit(0);
        }     
    }
    //Map inputs to outputs or process the data
    switch(choice)
    {
        case '+':
        {
            op1 = rand()%900+100;  //[100-999]
            op2 = rand()%900+100;  //[100-999]
            answer = op1 + op2;    //[3 to 4 digit result]
            break;               
        }
        case '-':
        {
            op1 = rand()%900+100;  //[100-999]
            op2 = rand()%900+100;  //[100-999]
            answer = op1 - op2;    //[0-3 digit result]
            break;
        }
        case '*':
        {
            op1 = rand()%90+10;    //[10-99]
            op2 = rand()%90+10;    //[10-99]
            answer = op1 * op2;    //[2 to 4 digit result]
            break;
        }
        case '/':
        {
            answer = rand()%90+10; //[10-99]
            op2 = rand()%90+10;    //[10-99]
            op1 = answer * op2;    //[2 to 3 digit result]
            break;
        }
        default:
        {
            cout<<"Bad operator"<<endl;
            return 1;
        }
    }
    //Output the transformed data
    cout<<setw(8)<<op1<<endl;
    cout<<choice<<setw(7)<<op2<<endl;
    cout"__________"<<endl;
    cin>>result;
    
    //True Answer comparison
    cout<<endl;
    cout<<((result==answer)?"Correct":"Incorrect")<<endl;
    cout<<"The answer = "<<answer<<endl;
    cout<<endl<<endl;
}
while(choice== '+' || choice== '-' || choice== '*' || choice== '/');

    
    //Exit stage right!
    return 0;
}

