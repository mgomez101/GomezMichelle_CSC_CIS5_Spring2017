/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char sex;                    //M or F
    unsigned short ht, wt, age;  //height(inches), weight (lbs), age(yrs)
    unsigned char cdyCals = 230; // Candy Bar calories
    float bmr; //Basal Metabolic Rate
    int nCdyBrs; // Number of candy bars we can eat 
    
    //Input or initialize values Here
    cout<<"This program calculates the number of "
          "candy bars allowed per day based upon your BMR"<<endl;
    cout<<"Type in your Sex (M/F), Height(inches), Weight (lbs), Age (years"<<endl;
    cout<<"Inputs are integer based"<<endl;
    cin>> sex>>ht>>wt>>age;
    
    //Process/Calculations Here
    bmr = (sex=='M')?
         66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
        655+ 4.3f*wt +  4.7f*ht - 4.7f*age;
    nCdyBrs=static_cast<int>(bmr/cdyCals);
    //Output Located Here
    cout<<"The number of candy bars you can eat = "<<nCdyBrs<<endl;

    //Exit
    return 0;
}

