#include "games.h"
void pri(game_list** head)
{
	if (*head != NULL)
	{
		int i = 1;
		game_list* ptr = (*head);
		ptr = (*head);
		printf("N     %-30s %-20s %-20s %-20s %-20s\n", "Name", "Developer", "Genre", "Salles", "Year");
		while (ptr != NULL)
		{
			printf("%-5d %-30s %-20s %-20s %-20s %-20s\n", i, ptr->nazvanie, ptr->developer, ptr->genre, ptr->sells, ptr->year);
			ptr = ptr->next;
			i++;
		}
	}
	else
	{
		printf("EMPTY");
	}
}
