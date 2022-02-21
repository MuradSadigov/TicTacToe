#include <iostream>
using namespace std;
//Variables
bool gameOver;
char grid[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
string player1;
string player2;
char signs[2];
int n;

void Setup(){gameOver = false;}//Setup

void Draw()//DesignOfTheGame
{
	system("cls");

	cout << " ----------------TIC - TAC - TOE---------------- " << endl; cout << endl;

	cout << " " << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << " " << endl;
	cout << "-----------" << endl;
	cout << " " << grid[1][0] << " | " << grid[1][1] << " | " << grid[1][2] << " " << endl;
	cout << "-----------" << endl;
	cout << " " << grid[2][0] << " | " << grid[2][1] << " | " << grid[2][2] << " " << endl;

	cout << endl;
	cout << endl;
	cout << "Player_1: " << player1 << endl;
	cout << "Player_2: " << player2 << endl;
	cout << endl;
}

void Input()//Input_Player1
{

	do
	{
		cout << "Player_1 - Enter the location (" << signs[0] << "): ";
		cin >> n;
	} while (n >= 10 || n <= 0 || grid[(n - 1) / 3][(n - 1) - (((n - 1) / 3) * 3)] != ' ');
	
	switch (n)
	{
	case 1:
		grid[0][0] = signs[0];
		break;
	case 2:
		grid[0][1] = signs[0];
		break;
	case 3:
		grid[0][2] = signs[0];
		break;
	case 4:
		grid[1][0] = signs[0];
		break;
	case 5:
		grid[1][1] = signs[0];
		break;
	case 6:
		grid[1][2] = signs[0];
		break;
	case 7:
		grid[2][0] = signs[0];
		break;
	case 8:
		grid[2][1] = signs[0];
		break;
	case 9:
		grid[2][2] = signs[0];
		break;
	}
}

void Input1()//Input_Player2
{
	do
	{
		cout << "Player_2 - Enter the location (" << signs[1] << "): ";
		cin >> n;
	} while (n >= 10 || n <= 0 || grid[(n-1)/3][(n - 1) - (((n - 1) / 3) * 3)] != ' ');

	switch (n)
	{
	case 1:
		grid[0][0] = signs[1];
		break;
	case 2:
		grid[0][1] = signs[1];
		break;
	case 3:
		grid[0][2] = signs[1];
		break;
	case 4:
		grid[1][0] = signs[1];
		break;
	case 5:
		grid[1][1] = signs[1];
		break;
	case 6:
		grid[1][2] = signs[1];
		break;
	case 7:
		grid[2][0] = signs[1];
		break;
	case 8:
		grid[2][1] = signs[1];
		break;
	case 9:
		grid[2][2] = signs[1];
		break;
	}
}

bool isGridFull()//DRAW - Logic
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (grid[i][j] == ' ')  return 0;

		}
	}
	
	return 1;
}

void Logic()//x || o
{
	if ((grid[0][0] == 'x' && grid[1][1] == 'x' && grid[2][2] == 'x') || (grid[0][0] == 'o' && grid[1][1] == 'o' && grid[2][2] == 'o'))//1-9
	{
		if ((grid[0][0] == signs[0] && grid[1][1] == signs[0] && grid[2][2] == signs[0]))
		{
			cout << "WINNER IS - " << player1 << endl;
			gameOver = true;
			
		}
		else if ((grid[0][0] == signs[1] && grid[1][1] == signs[1] && grid[2][2] == signs[1]))
		{
			cout << "WINNER IS - " << player2 << endl;
			gameOver = true;
		}
	}
	else if ((grid[0][2] == 'x' && grid[1][1] == 'x' && grid[2][0] == 'x') || (grid[0][2] == 'o' && grid[1][1] == 'o' && grid[2][0] == 'o'))//3-7
	{
		if ((grid[0][2] == signs[0] && grid[1][1] == signs[0] && grid[2][0] == signs[0]))
		{
			cout << "WINNER IS - " << player1 << endl;
			gameOver = true;

		}
		else if ((grid[0][2] == signs[1] && grid[1][1] == signs[1] && grid[2][0] == signs[1]))
		{
			cout << "WINNER IS - " << player2 << endl;
			gameOver = true;
		}
		
	}
	else if ((grid[0][0] == 'x' && grid[0][1] == 'x' && grid[0][2] == 'x') || (grid[0][0] == 'o' && grid[0][1] == 'o' && grid[0][2] == 'o'))//1-3
	{
		if ((grid[0][0] == signs[0] && grid[0][1] == signs[0] && grid[0][2] == signs[0]))
		{
			cout << "WINNER IS - " << player1 << endl;
			gameOver = true;
		}
		else if ((grid[0][0] == signs[1] && grid[0][1] == signs[1] && grid[0][2] == signs[1]))
		{
			cout << "WINNER IS - " << player2 << endl;
			gameOver = true;
		}
		
	}
	else if ((grid[0][0] == 'x' && grid[1][0] == 'x' && grid[2][0] == 'x') || (grid[0][0] == 'o' && grid[1][0] == 'o' && grid[2][0] == 'o'))//1-7
	{
		if ((grid[0][0] == signs[0] && grid[1][0] == signs[0] && grid[2][0] == signs[0]))
		{
			cout << "WINNER IS - " << player1 << endl;
			gameOver = true;
		}
		else if ((grid[0][0] == signs[1] && grid[1][0] == signs[1] && grid[2][0] == signs[1]))
		{
			cout << "WINNER IS - " << player2 << endl;
			gameOver = true;
		}
		
	}
	else if ((grid[2][0] == 'x' && grid[2][1] == 'x' && grid[2][2] == 'x') || (grid[2][0] == 'o' && grid[2][1] == 'o' && grid[2][2] == 'o'))//7-9
	{
		if ((grid[2][0] == signs[0] && grid[2][1] == signs[0] && grid[2][2] == signs[0]))
		{
			cout << "WINNER IS - " << player1 << endl;
			gameOver = true;
		}
		else if ((grid[2][0] == signs[1] && grid[2][1] == signs[1] && grid[2][2] == signs[1]))
		{
			cout << "WINNER IS - " << player2 << endl;
			gameOver = true;
		}
		
	}
	else if ((grid[0][2] == 'x' && grid[1][2] == 'x' && grid[2][2] == 'x') || (grid[0][2] == 'o' && grid[1][2] == 'o' && grid[2][2] == 'o'))//3-9
	{
		if ((grid[0][2] == signs[0] && grid[1][2] == signs[0] && grid[2][2] == signs[0]))
		{
			cout << "WINNER IS - " << player1 << endl;
			gameOver = true;
		}
		else if ((grid[0][2] == signs[1] && grid[1][2] == signs[1] && grid[2][2] == signs[1]))
		{
			cout << "WINNER IS - " << player2 << endl;
			gameOver = true;
		}

	}
	else if ((grid[0][1] == 'x' && grid[1][1] == 'x' && grid[2][1] == 'x') || (grid[0][1] == 'o' && grid[1][1] == 'o' && grid[2][1] == 'o'))//2-8
	{
		if ((grid[0][1] == signs[0] && grid[1][1] == signs[0] && grid[2][1] == signs[0]))
		{
			cout << "WINNER IS - " << player1 << endl;
			gameOver = true;
		}
		else if ((grid[0][1] == signs[1] && grid[1][1] == signs[1] && grid[2][1] == signs[1]))
		{
			cout << "WINNER IS - " << player2 << endl;
			gameOver = true;
		}
		
	}
	else if ((grid[1][0] == 'x' && grid[1][1] == 'x' && grid[1][2] == 'x') || (grid[1][0] == 'o' && grid[1][1] == 'o' && grid[1][2] == 'o'))//4-6
	{
		if ((grid[1][0] == signs[0] && grid[1][1] == signs[0] && grid[1][2] == signs[0]))
		{
			cout << "WINNER IS - " << player1 << endl;
			gameOver = true;
		}
		else if ((grid[1][0] == signs[1] && grid[1][1] == signs[1] && grid[1][2] == signs[1]))
		{
			cout << "WINNER IS - " << player2 << endl;
			gameOver = true;
		}

	}
	else if (isGridFull() == 1)//DRAW
	{

		cout << "Draw!" << endl;
		gameOver = true;

	}
	
}

void Info()//InfoAboutPlayers
{
	cout << " ----------------TIC - TAC - TOE---------------- " << endl; cout << endl;
	do {
		do {
			cout << "Player_1: ";
			cin >> player1;
		} while (player1 == player2);

		do {
			cout << "Player_2: ";
			cin >> player2;
		} while (player1 == player2);

	} while (player1 == player2);

	do {
		do {
			cout << "Player_1 - Choose the sign(x or o): ";
			cin >> signs[0];
		} while ((signs[0] != 'x') && (signs[0] != 'o'));

		do {
			cout << "Player_2 - Choose the sign(x or o): ";
			cin >> signs[1];
		} while ((signs[1] != 'x') && (signs[1] != 'o'));

		if (signs[0] == signs[1])
		{
			cout << "Please choose different signs!" << endl;
		}
	} while (signs[0] == signs[1]);

}

int main()//MainFunction
{
	Info();

	Setup();
	while (!gameOver)
	{
		
		Draw();
		Input();
		Logic();

		Draw();
		if (gameOver != true)
		{
			Input1();
		}
		Logic();
	}

	return 0;
}

//Made by Murad Sadigov // 2022, February 02 //