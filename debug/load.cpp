#include "games.h"
void load(game_list** head)
{
	FILE* S;
	game_list* ptr = (*head);
	char name[32];
	fflush(stdin);
	fprintf(stdout, "%s", "Emter the name of file:");
	scanf("%s", &name);
	while ((S = fopen(name, "w")) == (NULL))
	{
		fprintf(stdout, "%s", "File not found!\n");
		scanf("%s", &name);
	}
	fprintf(stdout, "The file  %s was found successfully!\n", name);
	if ((*head) != NULL)
	{
		game_list* ptr = *head;
		fprintf(S, "\n\n\n%-25s %-20s %-20s %-20s %-20s\n", "Name", "Developer", "Genre", "Salles", "Year");
		while (ptr != NULL)
		{
			fprintf(S, "%-25s %-20s %-20s %-20s %-20s\n", ptr->nazvanie, ptr->developer, ptr->genre, ptr->sells, ptr->year);
			ptr = ptr->next;
		}
	}
	else
	{
		printf("\EMPTY\n\n");
	}
	fclose(S);
}
