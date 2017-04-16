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


using namespace std;


void menu(void);
void game1(void);
void game2(void);
void game3(void);

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
            case '3': game3();break;
            default: 
            {
                cout<<"Thanks for not playing"<<endl;
            }
        }
    }
    while(choice>='1' && choice<='3');

    return 0;
}

void game3(void)
{
    cout<<" GAME ONE / MASTERMIND / EASY "<<endl<<endl;
    
    int winner = 817;
    int num;
    int correct;
    int guess;
    int cNumber;
    int cPlace;
    int cLeft, cMid,cRight; //Correct numbers
    int gLeft, gMid, gRight; //Guessed numbers
    
    cLeft = winner/100;
    cMid = (winner/10)%10;
    cRight = winner%10;
    
    num=1, correct=0;
    
    while(!correct)
    {
        cout<<"Guess my number (between 0 and 999 of course)"<<endl;
        cout<<"This is GUESS #"<<num;
        cin>>guess;
        
        if (guess>=0 && guess <=999)
        {
            if (guess == winner)
            {
                cout<<"WOW. That took you "<<num<<" move(s)!"<<endl;
                correct=1;
            }
            else
            {
                gLeft = guess/100;
                gMid = (guess/10) % 10;
                gRight = guess%10;
                
                cNumber = 0;
                if (gLeft == cLeft || gLeft == cMid || gLeft == cRight) cNumber++;
                if (gMid == cLeft || gMid == cMid || gMid == cRight) cNumber++;
                if (gRight == cLeft || gRight == cMid || gRight == cRight) cNumber++;
                
                
                cPlace = 0;
                if (gLeft == cLeft) cNumber++;
                if (gMid == cMid) cNumber++;
                if (gRight == cRight) cNumber++;
                
                cout<<"Correct Order: "<<cPlace<<endl;
                cout<<"Correct Digits: "<<cNumber<<endl; 
            }
        } else
        {
            cout<<"FOLLOW INSTRUCTIONS.";
        }
        num++;
    }
    
}

void game2(void)
{
    cout<<" GAME TWO / / "<<endl;
    
}

void game1(void)
{
    cout<<" GAME THREE / / "<<endl;
}

void menu(void)
{
    cout<<endl<<endl<<"************WELCOME******************"<<endl;
    cout<<"Type 0 to Exit"<<endl;
    cout<<"Type 1 for Game One"<<endl;
    cout<<"Type 2 for Game Two"<<endl;
    cout<<"Type 3 for Game Three"<<endl;
    
}