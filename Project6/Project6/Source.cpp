// arrays example
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define WIDTH 8
#define HEIGHT 8

char jimmy[HEIGHT][WIDTH];// = { {'.','.','.','.','.'}, {'.','0','0','0','0'}, {'0','0','0','1','0'} };
int n, m, a, oriz = 0, vert = 0, fruitX, fruitY,score;

int main()
{
	
		
	for (n = 0; n < HEIGHT; n++)
		for (m = 0; m < WIDTH; m++)
		{
			jimmy[n][m] ='.';
		}
	jimmy[0][0] = '8';
	srand(time(NULL));
	fruitX = rand() % WIDTH;
	fruitY = rand() % HEIGHT;
	jimmy[fruitX][fruitY] = 'B';


tiparire:
	system("cls");
	cout << "A-stinga   D-dreapta   W-sus  S-jos  Q-quit\n\n\n" << "Score: "<<score << "\nx: "<<fruitX<<"\ny: "<<fruitY<<"\n\n  ";
	jimmy[fruitX][fruitY] = 'B';
	for (n = 0; n < HEIGHT; n++)
		for (m = 0; m < WIDTH; m++)
		{

			cout << jimmy[n][m] << ' ';
			if (m == WIDTH-1) cout << "\n  ";
		}
tasta:
	a = _getch(); // scanam tastatura
	switch (a)
	{
	case 'd'://dreapta
		if (vert < WIDTH-1) 
		{ vert++; 
		}


		if (jimmy[oriz][vert] == 'B') // verificam daca e 11
		{
			score++;
			cout << "\n\n\n BoooM" << endl;
			//goto end;
			srand(time(NULL));
			fruitX = rand() % WIDTH;
			fruitY = rand() % HEIGHT;
		}

		jimmy[oriz][vert - 1] = '.';

		jimmy[oriz][vert] = '8';
		break;
	case 'a'://stinga
		if (vert > 0)
		{
			vert--;
		}



		if (jimmy[oriz][vert] == 'B') // verificam daca e 11
		{
			score++;
			cout << "\n\n\n BoooM" << endl;
			//goto end;
			srand(time(NULL));
			fruitX = rand() % WIDTH ;
			fruitY = rand() % HEIGHT;
			//goto end;
		}

		jimmy[oriz][vert] = '8';

		jimmy[oriz][vert+1] = '.';
		break;
	case 's'://jos
		if (oriz < HEIGHT-1)
		{
			oriz++;
		}
		


		if (jimmy[oriz][vert] == 'B') // verificam daca e 11
		{
			score++;
			cout << "\n\n\n BoooM" << endl;
			//goto end;
			srand(time(NULL));
			fruitX = rand() % WIDTH ;
			fruitY = rand() % HEIGHT;
		}

		jimmy[oriz][vert] = '8';

		jimmy[oriz-1][vert] = '.';
		break;
	case 'w'://sus
		if (oriz > 0)
		{
			oriz--;
		}



		if (jimmy[oriz][vert] == 'B') // verificam daca e 11
		{
			score++;
			cout << "\n\n\n BoooM" << endl;
			//goto end;
			srand(time(NULL));
			fruitX = rand() % WIDTH ;
			fruitY = rand() % HEIGHT;
		}

		jimmy[oriz][vert] = '8';

		jimmy[oriz + 1][vert] = '.';
		break;
	case 'q':
		goto end;
	}
	
	
	goto tiparire;


end:
	return(0);
}
