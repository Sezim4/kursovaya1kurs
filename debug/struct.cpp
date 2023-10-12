#include "games.h"
typedef struct game_list
{
	char nazvanie[16],
		developer[16],
		genre[16],
		sells[16],
		year[16];
	game_list* next;
};
