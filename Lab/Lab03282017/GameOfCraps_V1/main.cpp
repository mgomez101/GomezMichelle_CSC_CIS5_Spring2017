/* 
 * File:   main.cpp
 * Author: Michelle Gomez
 * Created on March 28, 2017 11:40 AM
 * Purpose:  Simulate a Craps game
 */

//System Libraries Here
#include <iostream> //INput - Output LIbrary
#include <ctime>    //Time for rand
#include <cstdlib>  //Srand to set the seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int nGames, wins=0, losses=0;
    
    //Input or initialize values Here
    nGames = 10000;
    
    //Play the game
    for (int game=1; game<=nGames;game++){
        //Throw dice and sum
        char die1=rand()%6+1; // [1,6]
        char die2=rand()%6+1; // [1,6]
        char sum1=die1+die2;
        //Determine wins and losses
        if(sum1==7 || sum1==11)wins++;
        else if(sum1==2 || sum1==3 || sum1==12)losses++;
        //^^ "if sum1 is equal to blahblah OR (||) blahblah" increment losses(++)
        else
        {
            //Loop until a 7 or previous sum is thrown
            bool thrwAgn = true;
            do
            {//Throw dice again
                char die1=rand()%6+1; // [1,6]
                char die2=rand()%6+1; // [1,6]
                char sum2=die1+die2;
                if(sum2==7)
                {
                    losses++;
                    thrwAgn = false;
                }
                else if(sum1==sum2)
                {
                    wins++;
                    thrwAgn= false;
                }
            }while(thrwAgn);
        }
    }
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Total number of Games = "<<nGames<<endl;
    cout<<"Number of games won   = "<<wins<<endl;
    cout<<"Number of games lost  = "<<losses<<endl;
    cout<<"Total wins and losses = "<<wins+losses<<endl;

    //Exit
    return 0;
}

