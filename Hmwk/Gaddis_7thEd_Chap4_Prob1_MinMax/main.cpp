/* 
 * File:   main.cpp
 * Author: Michelle Gomez  
 * Created on March 22, 2017, 1:48 PM
 * Purpose:  Determining which number is smaller and which is bigger
 */

//System Libraries Here
#include <iostream>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int num1, num2; //Two integers input by user 
    string value; 
    
    //Input or initialize values Here
    cout<<"Enter a number"<<endl;
    cin>>num1;
    cout<<"Enter a different number"<<endl;
    cin>>num2;
    
    //Process/Calculations Here
    value=(num1>num2)?"greater than":"less than ";
            
    //Output Located Here
    cout<<num1<<" is "<<value<<num2<<endl; 

    //Exit
    return 0;
}

