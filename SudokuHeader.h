#ifndef Sudoku
#define Sudoku

#include <iostream>
#include <vector>
#include <iomanip>
#include <conio.h>

using namespace std;

class SudokuGame
{
private:
	vector<vector<int>> puzzle{}; //Sudoku puzzle Vectoru Hazır bi şekilde eklenecek
public:
	SudokuGame()
	{
		cout << setw(50) << "Welcome to Sudoku Game" << endl << setw(40)
			<< "Rules" << endl << endl << setw(20) << "1. Use Numbers 1-9" << endl
			<< setw(59) << "2. Don't Repeat Any Numbers(each row, column and square) " << endl;
		cout << "Press any key to continue...";
		(void)_getch();
	}
	void displayGame(); //Alperen
	bool columnControl(); //Onur
	bool rowControl(); //Mücahit
	bool squareControl(); //Alperen
	void inputs(int number); //Onur
	void showSolution(); //Mücahit
};



#endif#
