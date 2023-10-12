#include "games.h"
void filter(game_list** head)
{
	game_list* ptr = (*head);
	fflush(stdin);
	fflush(stdout);
	char number[16];
	int i;
	printf(" 1)Year\n 2)Genre\nSelect the field to edit:");
	scanf("%d", &i);
	fflush(stdin);
	switch (i)
	{
	case 1:
		fflush(stdin);
		printf("Enter the year:");
		gets(number);
		while (ptr != NULL)
		{
			if (strstr(ptr->year, number) != NULL)
				printf("%-32s %-32s %-32s %-32s %-32s\n", ptr->nazvanie, ptr->developer, ptr->genre, ptr->sells, ptr->year);
			ptr = ptr->next;
		}
		break;

	case 2:
		fflush(stdin);
		printf("Enter the genre:");
		gets(number);
		while (ptr != NULL)
		{
			if (strstr(ptr->genre, number) != NULL)
				printf("%-32s %-32s %-32s %-32s %-32s\n", ptr->nazvanie, ptr->developer, ptr->genre, ptr->sells, ptr->year);
			ptr = ptr->next;
		}
		break;
	default: printf("Wrong input");
	}
}
