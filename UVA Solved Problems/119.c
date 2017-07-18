#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAXPEOPLE 10
#define NAMELEN	32

typedef struct Person Person;
struct Person {
    char name[NAMELEN];
    int total;
};

Person people[MAXPEOPLE];
int npeople;

void
addperson(char *name)
{
    assert(npeople < MAXPEOPLE);
	strcpy(people[npeople].name, name);
    npeople++;
}

Person*
lookup(char *name)
{
    int i;

    for(i=0; i<npeople; i++)
	if(strcmp(name, people[i].name) == 0)
	    return &people[i];

    assert(0);
}

int
main(void)
{
    char name[NAMELEN];
    int i, j, np, amt, ng;
    Person *giver, *receiver;

    scanf("%d", &np);
    assert(np <= MAXPEOPLE);

    for(i=0; i<np; i++) {
	scanf("%s", name);
	addperson(name);
    }

    for(i=0; i<np; i++) {
	scanf("%s %d %d", name, &amt, &ng);
	giver = lookup(name);

	for(j=0; j<ng; j++) {
	    scanf("%s", name);
	    receiver = lookup(name);
	    giver->total -= amt/ng;
	    receiver->total += amt/ng;
	}
    }

    for(i=0; i<np; i++)
	printf("%s %d\n", people[i].name, people[i].total);
    exit (0);
}
