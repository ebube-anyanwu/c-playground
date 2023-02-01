#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#define NUM_ADS 7

int main(void)
{
	int i;
	char *AD[] = {
		"William: SBM GSOH likes sports, TV, dining",
		"Matt: SWM NS likes art, movies, theater",
		"Luis: SLM ND likes books, theater, art",
		"Mike: DWM DS likes trucks, sports and bieber",
		"Peter: SAM lieks chess, working out and art",
		"Josh: SJM likes sports, movies and theater",
		"Jed: DBM likes theater, books and dining"
	};

	puts("Search results:");
	puts("----------------------------");
	
	for (i = 0; i < NUM_ADS; i++)
	{
		if (strstr(AD[i], "sports") && !strstr(AD[i], "bieber"))
			printf("%s\n", AD[i]);
	}

	puts("----------------------------");

	printf("%p\n", main);

	return 0;
}
