/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRt,   // Pay rate in dollars
          hrsWrk,  //Hours worked per week
          payChk;  //Paycheck amount
    //Input or initialize values Here
    cout<<"The program calculates paycheck"<<endl;
    cout<<"Type in the pay rate"<<endl;
    cin>>payRt;
    cout<<"Type in the hours worked (week)"<<endl;
    cin>>hrsWrk;
    
    if(hrsWrk>40) 
        payChk = payRt * hrsWrk + (payRt*(hrsWrk-40));
    else if (hrsWrk<=40)
        payChk = payRt * hrsWrk;
    //Output Located Here
    cout<<"Paycheck Amount $"<<payChk;

    //Exit
    return 0;
}

