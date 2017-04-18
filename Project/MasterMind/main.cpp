/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Michelle Gomez
 *
 * Created on February 17, 2017, 12:53 PM
 */


#include <iostream>
#include <ctime>
#include <cstdlib>



using namespace std;


void menu(void);
void game1(void);
void game2(void);

int main() {

    //Declare variables
    char choice;
    
    //Show menu and loop
    do
    {
        //Display Menu
        menu();
        
        //Input choice 
        cout<<"Game # ";
        cin>>choice;
        
        switch(choice)
        {
            case '1': game1();break;
            case '2': game2();break;
            default:
            {
                cout<<"Thanks for not playing"<<endl;
            }
        }
    }
    while(choice>='1' && choice<='2');

    return 0;
}
void menu(void)
{
    cout<<endl<<endl<<"************WELCOME******************"<<endl;
    cout<<"Type 0 to Exit"<<endl;
    cout<<"Type 1 for Game One"<<endl;
    cout<<"Type 2 for Game Two"<<endl;
    cout<<"Type 3 for Game Three"<<endl;
    
}


void game1(void)
{
    cout<<" MASTERMIND / EASIER "<<endl<<endl;
    
    int winner = 817,        //Winning number (not randomly generated)
        num,                 //Number of tries/guesses
        correct,             //Correct number
        guess,               //Guessed number      
        cNumber,             //Correct digit
        cPlace,              //Correct placement/position
        cLeft, cMid,cRight,  //Correct numbers
        gLeft, gMid, gRight; //Guessed numbers
        cLeft = winner/100;    //817 divided by 100 will give 8.17 (diving integers will give only 8)
        cMid = (winner/10)%10; //(817/10)%10 will give 81%10 which will give only 1
        cRight = winner%10;    //817%10 will give only 7
    //Using "programming view" on a windows calculator will give only programming math results
        num=1, correct=0;
    
    while(!correct)
    {
        cout<<"Guess my number (between 0 and 999 of course)"<<endl;
        cout<<"This is GUESS # "<<num<<endl;
        cin>>guess;
        
        if (guess>=0 && guess<=999)  //If both operands (guess greater than 0 AND guess less than 999) are TRUE
        {
            if (guess==winner)    //If guess is equal to correct number(winner)
            {
                cout<<"WOW. That took you "<<num<<" move(s)!"<<endl;  //cout congratulations and # of moves needed
                correct=1;
            }
            else //If is statement was false
            {
                gLeft = guess/100;
                gMid = (guess/10) % 10;
                gRight = guess%10;
                
                cNumber = 0; //Set initial correct placement of digits to zero
                
                if (gLeft == cLeft) 
                {
                  cNumber++;    //Increment correct number by one(left)  
                }
                if (gLeft == cMid)
                {
                  cNumber++;    //Increment correct number by one(left)  
                }
                if (gLeft == cRight)
                {
                  cNumber++;    //Increment correct number by one(left)  
                }
                    
                if (gMid == cLeft) 
                {
                  cNumber++;       //Increment correct number by one(middle)  
                }
                if(gMid == cMid)
                {
                  cNumber++; //Increment correct number by one(right)  
                }
                if(gMid == cRight) 
                {
                  cNumber++; //Increment correct number by one(right)  
                }
                
                if (gRight == cLeft || gRight == cMid || gRight == cRight) 
                {
                  cNumber++; //Increment correct number by one(right)  
                }
                
               cPlace = 0; //Set initial correct number/digits to zero
                if (gLeft == cLeft)
                {
                 cPlace++;  //Increment correct placement by one(left)   817
                }
                if (gMid == cMid) 
                {
                 cPlace++;    //Increment correct placement by one(middle)   
                }
                if (gRight == cRight)
                {
                 cPlace++;//Increment correct placement by one(right)   
                }
                
                cout<<"Correct Order: "<<cPlace<<endl;
                cout<<"Correct Digits: "<<cNumber<<endl; 
            }
        } else //If user failed to enter number between 0-999
        {
            cout<<"FOLLOW INSTRUCTIONS.";//Let user know they can't  follow instructions with cout message
        }
        num++; //Increment number of guesses by one
    }
    
}

void game2(void)
{
 cout<<"No time for game two play game one instead :D"<<endl;   
}
 