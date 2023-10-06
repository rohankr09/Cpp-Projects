#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
    cout << "\n____________________________* ROCK || PAPER || SCISSOR *____________________________\n\n" << endl;

    cout << "GAME RULES ***************" << endl;
    cout << endl;
    cout << "-> Rock crushes the scissor" << endl;
    cout << "-> Scissor cuts the paper" << endl;
    cout << "-> Paper covers the rock" << endl;
    cout << endl;


    string playername;
    cout << "Enter your game name: ";
    getline(cin, playername);

    int rounds;
    cout << endl;
    cout << playername << ", How many rounds you want to play? : ";
    cin >> rounds;

    int player_score = 0, computer_score = 0;

    for (int roundtime = 1; roundtime <= rounds; roundtime++)
    {
        int player_choice, computer_choice;

        cout << endl;
        cout << "Round No: " << roundtime << "/" << rounds << endl;

        cout << endl;
        cout << playername << " score is: " << player_score << endl;
        cout << "Computer Score is: " << computer_score << endl;
        cout << endl;


        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissor" << endl;
        cout << endl;

        do
        {
            cout << "Choose your weapon of choice: ";
            cin >> player_choice;
        }
        while (player_choice != 1 && player_choice != 2 && player_choice != 3);

        srand(time(0));
        computer_choice = (rand() % 3) + 1; // It'll return random no. from 1 to 3.

        if (player_choice == 1 && computer_choice == 3)
        {
            cout << playername << ", you WON this round!" << endl;
            cout << endl;
            player_score++;
        }
        else if (player_choice == 2 && computer_choice == 1)
        {
            cout << playername << ", you WON this round!" << endl;
            cout << endl;
            player_score++;
        }
        else if (player_choice == 3 && computer_choice == 2)
        {
            cout << playername << ", you WON this round!" << endl;
            cout << endl;
            player_score++;
        }
        else if (player_choice == computer_choice)
        {
            cout << "It's a DRAW" << endl;
            cout << endl;
        }
        else
        {
            cout << "Computer WON this round!" << endl;
            cout << endl;
            computer_score++;
        }
        cout << "Press any key to continue...";
        getch();
        cout << endl;
        system("cls");
    }


    if (computer_score == player_score)
    {
        cout << "Game is DRAWN!" << endl;
    }
    else if (player_score > computer_score)
    {
        cout << endl;
        cout << playername << ", you WON the GAME!!" << endl;
    }
    else
    {
        cout << endl;
        cout << "Better luck next time, Computer WON the GAME!!" << endl;
    }

    cout << endl;
    cout << endl;
    cout << "! FINAL SCORE !" << endl;
    cout << playername << " your score is: " << player_score << endl;
    cout << "Computer Score is: " << computer_score << endl;
    cout << endl;
    
    return 0;

}
