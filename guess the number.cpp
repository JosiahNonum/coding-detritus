#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;


//This program chooses a random number, which the user then attempts to guess. The program gives feedback, guiding the user towards the number.
int main()
{

	// variable declarations
	int guess, cont, score = 0;


	do 
	{

		// randomness seeding and picking the number
		srand(time(0));
		int picked = rand();


		// soliciting a guess from the user
		cout << "I've picked a random number. Can you guess what it is?\n";
		cin >> guess;
		score++;

		// processing the guess
		while (!(guess == picked))
		{
			if (guess > picked) {
				cout << "Try a smaller number.\n";
				cin >> guess;
				score++;
			}
			else if (guess < picked) {
				cout << "Try a bigger number.\n";
				cin >> guess;
				score++;
			}
		}

		cout << "Good job! You guessed the number!\n" << "You guessed it in " << score << " tries!" << endl;
		score = 0;
	
		// continuation mechanism
		cout << "Would you like to play another round? Press 0 to play again, and 1 to end the program.\n ";
		cin >> cont;
	} while (!cont);
}