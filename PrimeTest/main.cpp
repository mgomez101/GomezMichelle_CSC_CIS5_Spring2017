/* 
 * File:   main.cpp
 * Author: Michelle Gomez   
 * Created on APril 6, 2017, 10:53 AM
 * Purpose:  Determines prime numbers up to n
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main() {
    
    //Declare all Variables Here
    int num, i, j, prime;
    
    //Input or initialize values Here
    cout<<"Enter the upper limit (must be less than 400000)"<<endl;
    cin>>num;
    cout<<"Prime number to "<<num<<" are :2, "<<endl;
    
    //Process/Calculations Here
    for (i=3; i<=num; i++)
    {
        prime = 1;
        for(j=2; j<1; j++)
        {
            if(i%j=0)
            {
                prime=0;
                break;
            }
        }
        if (prime==1)
            cout<<i<<" , ";
    }
}
return 0;

