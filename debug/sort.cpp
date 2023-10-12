#include "games.h"
#define _CRT_SECURE_NO_WANINGS
void sort_year(game_list** head)
{
	char nazvanie[16], developer[16], genre[16], sells[16], year[16];
	int size = 0;
	game_list* ptr = (*head);
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	ptr = (*head);
	for (int j = 1; j < size; j++)
	{
		ptr = (*head);
		for (int i = 0; i < size - j; i++)
		{
			if (atoi(ptr->year) > atoi(ptr->next->year))
			{
				strcpy(nazvanie, ptr->nazvanie);
				strcpy(developer, ptr->developer);
				strcpy(genre, ptr->genre);
				strcpy(sells, ptr->sells);
				strcpy(year, ptr->year);

				strcpy(ptr->nazvanie, ptr->next->nazvanie);
				strcpy(ptr->developer, ptr->next->developer);
				strcpy(ptr->genre, ptr->next->genre);
				strcpy(ptr->sells, ptr->next->sells);
				strcpy(ptr->year, ptr->next->year);

				strcpy(ptr->next->nazvanie, nazvanie);
				strcpy(ptr->next->developer, developer);
				strcpy(ptr->next->genre, genre);
				strcpy(ptr->next->sells, sells);
				strcpy(ptr->next->year, year);
			}
			ptr = ptr->next;
		}
	}
}

void sort_nazvanie(game_list** head)
{
	char nazvanie[16], developer[16], genre[16], sells[16], year[16];
	int size = 0;
	game_list* ptr = (*head);
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	ptr = (*head);
	for (int j = 1; j < size; j++)
	{
		ptr = (*head);
		for (int i = 0; i < size - j; i++)
		{
			if (ptr->nazvanie[0] > ptr->next->nazvanie[0])
			{
				strcpy(nazvanie, ptr->nazvanie);
				strcpy(developer, ptr->developer);
				strcpy(genre, ptr->genre);
				strcpy(sells, ptr->sells);
				strcpy(year, ptr->year);

				strcpy(ptr->nazvanie, ptr->next->nazvanie);
				strcpy(ptr->developer, ptr->next->developer);
				strcpy(ptr->genre, ptr->next->genre);
				strcpy(ptr->sells, ptr->next->sells);
				strcpy(ptr->year, ptr->next->year);

				strcpy(ptr->next->nazvanie, nazvanie);
				strcpy(ptr->next->developer, developer);
				strcpy(ptr->next->genre, genre);
				strcpy(ptr->next->sells, sells);
				strcpy(ptr->next->year, year);
			}
			ptr = ptr->next;
		}
	}
}

void sort(game_list** head)
{
	int a;
	printf("1) Sort by name\n2) Sort by year\nSelect sorting:");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		sort_nazvanie(head);
		pri(head);
		system("pause");
		break;
	case 2:
		sort_year(head);
		pri(head);
		system("pause");
		break;
	default:
		break;
	}
}
