/* 
 * File:   main.cpp
 * Author: Michelle Gomez
 * Created on March 14, 2017, 11:29 AM
 * Purpose:  Time Calculator converter
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int MINUTE = 60;        //How many seconds in a minute
const int HOUR = 60 * MINUTE; //How many seconds in an hour
const int DAY = 24 * HOUR;    //How many seconds in a day
const int WEEK = 7 * DAY;     //How many seconds in a week
const int YEAR = 52 * WEEK;   //How many seconds in a year
const int MONTH = WEEK * (13/3);  //How many seconds in an average year
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nSecs; //Number of seconds to convert
    int nYrs, nMnths, nWks, nDys, nHrs, nMins;
    //Input or initialize values Here
    cout<<"This program converts seconds to years/months/weeks/days/hours"<<endl;
    cout<<"Input number of seconds for the conversion/equivalence"<<endl;
    cin>>nSecs;
    
    //Process/Calculations Here
    nYrs = nSecs/YEAR;      //Number of years
    cout<<nYrs<<" years ";
    nSecs -= nYrs*YEAR;     //Subtract yearly seconds
    
    nWks = nSecs/WEEK;      //Number of weeks
    cout<<nWks<<" weeks ";
    nMnths = nWks * 3/13;   //Convert number of weeks to months
    cout<<nMnths<<" months ";
    nSecs -= nWks*WEEK;
    nDys = nSecs/DAY;
    cout<<nDys<<" days ";
    nSecs -= nDys*DAY;
    nHrs = nSecs/HOUR;
    cout<<nHrs<<" hours ";
    nSecs -= nHrs*HOUR;
    nMins = nSecs/MINUTE;
    cout<<nMins<<" minutes ";
    nSecs -= nMins*MINUTE;
    cout<<nSecs<<" seconds";
    //Output Located Here
   

    //Exit
    return 0;
}

