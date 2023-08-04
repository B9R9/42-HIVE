#include <stdio.h>
#include "list.h"

/*
(*ptr).unchamp = x;
ptr->unchamp = x; ne fonctionne que pour les pointeurs
sinon utiliser le. ex: p.mp = 25;
*/
typedef struct Player
{
	signed char username [256];
	struct		Player	*next;
	int					*hp;
	int mp;

} Player;
int main(void)
{
	Player li = new_list();

	if(is_empty_list(li))
		printf("La liste est vide.\n");
	else
		printf("La liste a des eleements\n");
}
/*


void	create_player(Player *p) //le parametre estun pointeur et donc mp et hp sont des pointeurs. 
{
	strcpy(p->username, "Toto");
	p->mp = 25; 
	p->hp = 45;

}


int main(void)
{
 	Player p1 = {"John", 100, 100};

	create_player(&p1);

	printf("Nom du joueur: %s\n", p1.username);
	printf("PV : %d  | MP: %d\n", p1.hp, p1.mp);
	return 0;
}
*/