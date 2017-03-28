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
#include <fstream>  //File I/O
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PERCENT = 100.0f; //Conversion to percent

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    ifstream in;
    int nGames, wins=0, losses=0;
    int mxThrw=0, numThrw=0;
    
    //Input or initialize values Here
    in.open("GameInfo.dat");
    while (in>>nGames); // Last value becomes number of games
    
    //Play the game
    for (int game=1; game<=nGames;game++){
        //Throw dice and sum
        int gmThrw=1;
        char die1=rand()%6+1; // [1,6]
        char die2=rand()%6+1; // [1,6]
        char sum1=die1+die2;
        //Determine wins and losses
        switch(sum1){
            case 7:
            case 11:wins++;break;
            case 2:
            case 3:
            case 12:losses++;break;
            default:{
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
        numThrw+=gmThrw;
        if(mxThrw<gmThrw)mxThrw=gmThrw; //Independent if
 } 
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Total number of Games = "<<nGames<<endl;
    cout<<"Number of games won   = "<<wins<<endl;
    cout<<"Number of games lost  = "<<losses<<endl;
    cout<<"Total wins and losses = "<<wins+losses<<endl;
    cout<<"Percentage wins       = % "
            <<static_cast<float>(wins)/nGames*PERCENT<<endl;
    cout<<"Percentage losses     = % "
            <<static_cast<float>(losses)/nGames*PERCENT<<endl;
    cout<<"Maximum number of throws in a game = "<<mxThrw<<endl;
    cout<<"Average throw per game = "<<
    //Exit
    in.close();
    return 0;
}



