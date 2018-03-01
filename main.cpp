#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{

        int games;
        SecretDoor game;
        int wins=0; 

        cout<<"How many times do you want to play the game?"<<endl;
        cin>>games;

        for (int i=0; i<games; i++)
        {
                game.newGame();
                game.guessDoorC();
                game.guessDoorC();
                if (game.isWinner() == true)
                {
                        wins++;
                }        
        }
        cout<< "Times won: " <<wins<<endl;
    
  return 0;
}
