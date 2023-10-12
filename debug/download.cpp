#include "games.h"
void download(game_list** head)
{
	int i;
	FILE* S;
	char name[32], nazvanie[32], developer[32], genre[32], sells[32], year[32];
	int fd;
	*head = NULL;
	fprintf(stdout, "%s", "Enter the file name:\n");
	scanf("%s", &name);
	while ((S = fopen(name, "r+")) == (NULL))
	{
		fprintf(stdout, "%s", "File not found!\nTry again:");
		scanf("%s", &name);
	}
	fprintf(stdout, "File %s found correctly!\n", name);
	if (!feof(S))
	{
		fseek(S, 100, SEEK_SET);
		while (!feof(S))
		{

			fscanf(S, "%s", &nazvanie);
			fscanf(S, "%s", &developer);
			fscanf(S, "%s", &genre);
			fscanf(S, "%s", &sells);
			fscanf(S, "%s", &year);
			if (!feof(S))
				push(head, nazvanie, developer, genre, sells, year);
		}
	}
	else
	{
		printf("\nEMPTY!\n\n");
	}
	fclose(S);
}
