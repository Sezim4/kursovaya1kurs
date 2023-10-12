#include "games.h"
void push(game_list** head, char* nazvanie, char* developer, char* genre, char* sells, char* year)
{
	game_list* tmp;
	tmp = new game_list;
	strcpy_s(tmp->nazvanie, nazvanie);
	strcpy_s(tmp->developer, developer);
	strcpy_s(tmp->genre, genre);
	strcpy_s(tmp->sells, sells);
	strcpy_s(tmp->year, year);
	tmp->next = (*head);
	(*head) = tmp;
}
