// arrays example
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
#define WIDTH 5
#define HEIGHT 3

int jimmy[HEIGHT][WIDTH] = { {8,0,0,0,0}, {0,0,0,0,0}, {0,0,0,11,0} };
int n, m,a,oriz=0,vert=0;

int main()
{

tiparire:
	system("cls");
	cout << "A-stinga   D-dreapta   W-sus  S-jos \n\n\n\n\n\n\n  " ;
	for (n = 0; n < HEIGHT; n++)
		for (m = 0; m < WIDTH; m++)
		{

			cout << jimmy[n][m] << ' ';
			if (m == 4) cout << "\n  ";
		}
tasta:
	a = _getch(); // scanam tastatura
	switch (a)
	{
	case 'd'://dreapta
		if (vert < 4) 
		{ vert++; 
		}

		/*case 'd':
			vert++;
			break;
		}*/


		if (jimmy[oriz][vert] == 11) // verificam daca e 11
		{
			cout << "BoooM" << endl;
			//goto end;
		}

		jimmy[oriz][vert - 1] = 0;

		jimmy[oriz][vert] = 8;
		break;
	case 'a'://stinga
		if (vert > 0)
		{
			vert--;
		}
		

		/*case 'd':
			vert++;
			break;
		}*/


		if (jimmy[oriz][vert] == 11) // verificam daca e 11
		{
			cout << "BoooM" << endl;
			//goto end;
		}

		jimmy[oriz][vert] = 8;

		jimmy[oriz][vert+1] = 0;
		break;
	case 's'://jos
		if (oriz < 2)
		{
			oriz++;
		}
		


		if (jimmy[oriz][vert] == 11) // verificam daca e 11
		{
			cout << "BoooM" << endl;
			//goto end;
		}

		jimmy[oriz][vert] = 8;

		jimmy[oriz-1][vert] = 0;
		break;
	case 'w'://sus
		if (oriz > 0)
		{
			oriz--;
		}



		if (jimmy[oriz][vert] == 11) // verificam daca e 11
		{
			cout << "BoooM" << endl;
			//goto end;
		}

		jimmy[oriz][vert] = 8;

		jimmy[oriz + 1][vert] = 0;
		break;
	case 'q':
		goto end;
	}
	
	
	
	goto tiparire;


end:
	return(0);
}
	
	





//New line +++



	//cout << jimmy[2][0] << ' ';


//int foo [10] = { 1, 1, 1, 8, 1 , 1, 1, 1, 8, 1 };
//
//
//int main()
//{
//	for (int n = 0; n < 10; ++n)
//	{
//		cout << foo[n]<<" ";
//	}
//
//	return 0;
//}
