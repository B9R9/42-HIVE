#ifndef __LIST_H__
# define __LIST_H__

/*Definition du type booleen*/
typedef enum
{
	false,
	true
}Bool;

/*Definitiond une liste*/
typedef struct Player
{
	void *hp;
	struct Player *next;
} Player;

/*Prototype*/


#endif