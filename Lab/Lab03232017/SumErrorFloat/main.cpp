/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
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
    int nLoop = 10000000;
    float sum = 0, frac = 0.1f;

    //Process/Calculations Here
    for(int i = 1; i <= nLoop; i++)
    {
       sum+=frac; 
    }
    
    //Output Located Here
    cout<<"The sum of "
            <<frac<<" = "<<"->"<<nLoop<<" times = "<<sum<<endl;
    cout<<"Simple multiplication of "
            <<frac<<" x "<<nLoop<<" = "<<frac * nLoop<<endl;
    cout<<"Error  = "<<(frac*nLoop-sum)/(frac*nLoop) * 100
            <<"%"<<endl;
    
    //Exit
    return 0;
}

