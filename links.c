#include <stdio.h>
#include <stdlib.h>

typedef struct island {
	char *name;
	char *opens;
	char *closes;
	struct island *next;
} new_island;

void display(new_island *start)
{
	new_island *i = start;

	for (; i != NULL; i = i->next)
		printf("Name: %s. opens: %s-%s\n", i->name, i->opens, i->closes);
}

new_island* create(char *name)
{
	new_island *i = malloc(sizeof(new_island));

	i->name = name;
	i->opens = "09:00";
	i->closes = "17:00";
	i->next = NULL;

	return i;
}

int main(void)
{
	char name[80];

	printf("And now our watch begins\n");
	new_island Manila = {"Manila", "09:00", "17:00", NULL};
	new_island SanDiego = {"SanDiego", "09:00", "17:00", NULL};
	new_island Bonny = {"Bonny", "09:00", "17:00", NULL};
	new_island Lekki = {"Lekki", "09:00", "17:00", NULL};
	new_island Oguta = {"Oguta", "09:00", "17:00", NULL};
	
	scanf("%s", name);
	new_island *Degema = create(name);

	Manila.next = &SanDiego;
	SanDiego.next = &Bonny;
	Bonny.next = &Lekki;
	SanDiego.next = &Oguta;
	Oguta.next = &Bonny;
	Lekki.next = Degema;

	display(&Manila);
}
