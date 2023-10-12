#define _CRT_SECURE_NO_WARNINGS
#include "games.h"
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <io.h>
#include <Windows.h>
#include "games.h"

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	title();
	system("pause");
	int count;
	game_list* head = NULL;
	for (;;)
	{
		system("cls");
		char menu[] = ("		----------------------------------\n		|	1.Create date base	 |\n		----------------------------------\n		|	2.Load			 | \n		----------------------------------\n		|	3.Get from file		 |\n		----------------------------------\n		|	4.Add			 |\n		----------------------------------\n		|	5.Delete the last line	 |\n		----------------------------------\n		|	6.Data base output	 |\n		----------------------------------\n		|	7.Filter		 |\n		----------------------------------\n		|	8.Search		 |\n		----------------------------------\n		|	9.Sort			 |\n		----------------------------------\n		|	10.Edit			 |\n		----------------------------------\n		|	11.Exit			 |	 \n		----------------------------------\n	\n");
		__asm
		{
			xor eax, eax
			lea eax, menu
			push eax
			call dword ptr[printf]
			add esp, 4
		}
		printf("			\n		Enter the operation number:");
		scanf("%d", &count);
		switch (count)
		{
		case 1:
			system("cls");
			spisok(&head);
			break;
		case 2:
			system("cls");
			load(&head);
			break;
		case 3:
			system("cls");
			download(&head);
			system("pause");
			break;
		case 4: {
			system("cls");
			spisok(&head);
			system("pause");
			break;
		}
		case 5:
			system("cls");
			del(&head);
			system("pause");
			break;
		case 6:
			system("cls");
			fflush(stdin);
			pri(&head);
			system("pause");
			break;
		case 7:
			system("cls");
			filter(&head);
			system("pause");
			break;
		case 8:
			system("cls");
			search(&head);
			system("pause");
			break;
		case 9:
			system("cls");
			sort(&head);
			system("pause");
			break;
		case 10:
			system("cls");
			edit(&head);
			pri(&head);
			break;
		case 11:
			exit(0);
			break;
		}
	}

}
