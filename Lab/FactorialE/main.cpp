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
int fact (int i);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    for(int j = 1; j <= 6; j++)
    {
        float e = 1.0f, n;
        cin>>n;
        for(int i = 1; i <= n; i++)
        {
            e+=1/(float)fact(i);
        }
        cout<<e<<endl;
    }
    return 0;
}
int fact(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}

