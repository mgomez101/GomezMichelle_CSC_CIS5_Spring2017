/* 
 * File:   main.cpp
 * Author: Michelle Gomez
 * Created on March 23, 2017, 11:45 AM
 * Purpose:  Sum 1 to N
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main()
{
    //Declare and initialize variables
    //Make sure n<50000
    int n = 40000, sum = 0; //

    //Process/Calculations Here
    for(int i = 1; i <= n; i++)
    {
       sum+=i; 
    }
    
    //Output Located Here
    cout<<"The sum of 1 to "<<n<<" = "<<sum<<endl;
    cout<<"and "<<n<<" * ("<<n<<"+1)/2 = "<<n*(n+1)/2<<endl;
    
    //Exit
    return 0;
}


