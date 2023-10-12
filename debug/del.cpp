#include "games.h"
void del(game_list** head)
{
	if ((*head) != NULL)
	{
		game_list* prev = NULL;
		prev = (*head);
		(*head) = (*head)->next;
		free(prev);
	}
	else
	{
		printf("\nThe list is empty!\n");
	}
}
