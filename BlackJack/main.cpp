#include "blackjack.h"
#include <iostream>


using namespace std;

int main()
{
    cout << "\tWelcome to the Comp322 Blackjack game!" << endl <<endl;
    
    BlackJackGame game;
    
    // The main loop of the game
    bool playAgain = true;
    char answer = 'y';
    while(playAgain)
    {
        game.play();
        
        // Check whether the player would like to play another round
        cout << "\nWould you like another round? (y/n): ";
        cin >> answer;
        cout << endl << endl;
        playAgain = (answer == 'y' ? true : false);
    }
    
    cout << "Game over!" << endl;
    return 0;
}
