/* 
 * File:   main.cpp
 * Author: Michelle Gomez
 * Created on March 27, 2017, 11:18 AM
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
    int n, sum = 0; //

    //Process/Calculations Here
    cout<<"Enter a nonnegative integer to get the summation of that number."<<endl;
    cout<<"Must be a number less than 40000."<<endl;
    cin>>n;
    
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
