#include "games.h"
void spisok(game_list** head)
{
	fflush(stdin);
	char nazvanie[32], developer[32], genre[32], sells[32], year[32];
	printf("Enter the name:");
	gets(nazvanie);
	for (;;)
	{
		fflush(stdin);
		printf("Enter the developer:");
		gets(developer);
		printf("Enter the genre:");
		gets(genre);
		printf("Enter sales:");
		gets(sells);
		printf("Enter the year:");
		gets(year);
		push(head, nazvanie, developer, genre, sells, year);
		printf("To finish enter:  `\nEnter the name:");
		gets(nazvanie);
		if (nazvanie[0] == '`')
			break;
	}
}
