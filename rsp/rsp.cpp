#include<iostream>
#include<ctime>
#include<vector>
#include<string>
#include<cstdlib>
using namespace std;

class RockPaperScissors
{
public:
    int playerscount = 0;
    int computerscount = 0;
    string players_move;
    string Computers_move;
    RockPaperScissors()
    {
        while (computerscount <= 3 || playerscount <= 3)
        {
            char identifier;
            cout << "Enter the letter between r, s, p: " << endl;
            cin >> identifier;
            if (identifier == 'r')
            {
                players_move = "rock";
                cout << "Player's move: " << players_move << endl;
            }
            else if (identifier == 's')
            {
                players_move = "scissors";
                cout << "Player's move: " << players_move << endl;
            }
            else if (identifier == 'p')
            {
                players_move = "paper";
                cout << "Player's move: " << players_move << endl;
            }
            else
            {
                cout << "Invalid input, please enter either 'r' for rock, 's' for scissors or 'p' for paper" << endl;
            }

            srand(time(0));
            int computers_move = rand() % 3;
            vector<string> moves = { "rock", "scissors", "paper" };
            Computers_move = moves[computers_move];
            cout << "Computer's response is: " << Computers_move << endl;

            if (players_move == Computers_move)
            {
                cout << "It's a tie!" << endl;
            }
            else if (players_move == "rock" && Computers_move == "paper")
            {
                cout << "Computer is the winner. " << endl;
                computerscount++;
            }
            else if (players_move == "rock" && Computers_move == "scissors")
            {
                cout << "Player is the winner. " << endl;
                playerscount++;
            }
            else if (players_move == "paper" && Computers_move == "scissors")
            {
                cout << "computer is the winner. " << endl;
                computerscount++;
            }
            else if (players_move == "paper" && Computers_move == "rock")
            {
                cout << "Player is the winner. " << endl;
                playerscount++;
            }
            else if (players_move == "scissors" && Computers_move == "paper")
            {
                cout << "Player is the winner. " << endl;
                playerscount++;
            }
            else if (players_move == "scissors" && Computers_move == "rock")
            {
                cout << "Computer is the winner. " << endl;
                computerscount++;
            }
            if (computerscount >= 3)
            {
                break;
            }
            if (playerscount >= 3)
            {
                break;
            }
        } 

    }
};
int main()
{
    RockPaperScissors obj1;
    return 0;
}