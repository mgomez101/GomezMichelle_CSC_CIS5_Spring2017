/* 
 * File:   main.cpp
 * Author: Michelle Gomez  
 * Created on March 23, 2017, 12:05 PM
 * Purpose:  Menu to be utilized
 */

//System Libraries Here
#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    char choice;
    
    //Show menu and loop
    do
    {
      //Display menu
      cout<<endl<<endl<<"Type 0 to EXIT"<<endl;
      cout<<"Type 1 for Sum 1 to n Problem"<<endl;
      cout<<"Type 2 for Sum 0.1 error Problem"<<endl;
      cout<<"Type 3 for Problem 3"<<endl;
      cout<<"Type 4 for Problem 4"<<endl;
      cout<<"Type 5 for Problem 5"<<endl;
      cout<<"Type 6 for Problem 6"<<endl;
      cout<<"Type 7 for Problem 7"<<endl;
      cout<<"Type 8 for Problem 8"<<endl;
      cout<<"Type 9 for Problem 9"<<endl<<endl;
      
      //Input the choice
      cout<<"Problem ";
      cin>>choice;
      
      
      //Place solutions to problems in switch statement
      switch(choice){
          case '1':
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
              break;
          }
          
          case '2':{
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
                          break;
          }
          
          case '3':{
              cout<<"In problem solution 3"<<endl;
              break;
          }
          
          case '4':{
              cout<<"In problem solution 4"<<endl;
              break;
          }
          case '5':{
              cout<<"In problem solution 5"<<endl;
              break;
          }
          
          case '6':{
              cout<<"In problem solution 6"<<endl;
              break;
          }
          
          case '7':{
              cout<<"In problem solution 7"<<endl;
              break;
          }
          
          case '8':{
              cout<<"In problem solution 8"<<endl;
              break;
          }
          
          case '9':{
              cout<<"In problem solution 9"<<endl;
              break;
          }
      }
                  
    }
    while(choice>='1'&&choice<='9');
     
    //Exit
    return 0;
}

