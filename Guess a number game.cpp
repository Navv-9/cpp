#include<iostream>
using namespace std;
int main()
{
    string m;
    int guess, num, tries=0, i;
    
    //standard way of writing random number generator
    num= rand()%100 + 1;
    cout<<"* * * GUESS MY NUMBER GAME * * *\n";
    cout<<"Enter your name: ";
    cin>>m;
    cout<<"\nHello "<<m<<"!";
    cout<<"\n* *Welcome to GUESS MY NUMBER GAME!* *\n";
    cout<<"\nDISCLAIMER: YOU'LL ONLY GET 6 CHANCES.";
    
    for(i=0; i<=5; i++)
    {
         cout<<"\n\nEnter your guess between 1-100: ";
        cin>>guess;
         tries++;
         cout<<"\n";
        if(i<5)
        {
        if(guess>num)
        {
            cout<<"Too high!";
        }
        else if(guess<num)
        {
            cout<<"Too low!";
        }
        else
        {
             cout<<"Congratulations, you've guessed the correct number!\nYou've guessed it in "<<tries<<" tries.";
            break;
        }
        }
        else 
        {
            if(guess!=num)
            {
            cout<<"\n\nOops, you've run out of chances,\nThe number was "<<num<<".";
            break;
            }
            if(guess==num)
            {
            cout<<"Congratulations, you've guessed the correct number!\nYou've guessed it in "<<tries<<" tries.";
            break;
            }
            
        }
       
    }
    
  
    return 0;
}