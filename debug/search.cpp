#include "games.h"
void search(game_list** head)
{
	char name[16];
	game_list* ptr = (*head);
	fflush(stdin);
	printf("Enter the word to find: ");
	gets(name);
	if (ptr == NULL)
		printf("EMPTY");
	else
		printf("Result:");
	while (ptr != NULL)
	{
		if (strstr(ptr->nazvanie, name) != NULL)
			printf("%-32s %-32s %-32s %-32s %-32s\n", ptr->nazvanie, ptr->developer, ptr->genre, ptr->sells, ptr->year);
		if (strstr(ptr->developer, name) != NULL)
			printf("%-32s %-32s %-32s %-32s %-32s\n", ptr->nazvanie, ptr->developer, ptr->genre, ptr->sells, ptr->year);
		if (strstr(ptr->genre, name) != NULL)
			printf("%-32s %-32s %-32s %-32s %-32s\n", ptr->nazvanie, ptr->developer, ptr->genre, ptr->sells, ptr->year);
		if (strstr(ptr->sells, name) != NULL)
			printf("%-32s %-32s %-32s %-32s %-32s\n", ptr->nazvanie, ptr->developer, ptr->genre, ptr->sells, ptr->year);
		if (strstr(ptr->year, name) != NULL)
			printf("%-32s %-32s %-32s %-32s %-32s\n", ptr->nazvanie, ptr->developer, ptr->genre, ptr->sells, ptr->year);
		ptr = ptr->next;
	}
}
