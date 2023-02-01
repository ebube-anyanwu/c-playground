#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	if (argc)
	{
		printf("argc: %d\nargv: ", argc);
		for (i = 0; i < argc - 1; i++)
			printf("%s, ", argv[i]);
		printf("and %s.\n", argv[i]);
	}
	return 0;
}
