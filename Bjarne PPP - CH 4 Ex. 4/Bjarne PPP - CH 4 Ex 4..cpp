#include "../../std_lib_facilities.h"

int main()
{
	char verdict = 'k';
	int guess = 50;
	int final = 50;

	while (verdict != 'c')
	{
		cout << "Is your number: " << final << " ?";
		cin >> verdict;
		

		if (verdict == 'c') {
		}
		if (verdict == 'l') {
			if (guess == 25 || guess == 3) {
				++guess;
			}
			else {}
			guess = guess / 2;
			final += guess;
		}
		if (verdict == 's') {
			if (guess == 25 || guess == 3) {
				++guess;
			}
			else {}
			guess = guess / 2;
			final -= (guess);
		}
	}
	cout << "Here guessed it: " << final << '\n';
	keep_window_open();
}