#include "games.h"
void edit(game_list** head)
{
	game_list* ptr = (*head);
	int i = 0;
	char name[16];
	pri(head);
	if (ptr != NULL)
	{
		ptr = (*head);
		printf("Select the line to edit:");
		scanf("%d", &i);
		i--;
		for (; i > 0; i--)
		{
			ptr = ptr->next;
			if (ptr == NULL)
			{
				exit(-1);
				printf("Error when entering!");
			}
		}
		printf("Choose the field\n 1)Name \n 2)Developer \n 3)Genre \n 4)Salles \n 5)Year \n");
		scanf("%d", &i);
		fflush(stdin);
		printf("Enter a new value: ");
		gets(name);
		switch (i)
		{
		case 1:
			strcpy(ptr->nazvanie, name);
			break;
		case 2:
			strcpy(ptr->developer, name);
			break;
		case 3:
			strcpy(ptr->genre, name);
			break;
		case 4:
			strcpy(ptr->sells, name);
			break;
		case 5:
			strcpy(ptr->year, name);
			break;
		default: break;
		}

	}
	else {
		printf("EMPTY!");
	}
}
