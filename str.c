#include <stdio.h>
#include <string.h>

int main()
{
	char name[] = "Ebubechi Anyanwu";
	char str[] = {'A', 'n', 'o', 't',
	     	      'h', 'e', 'r', ' ',
		      's', 't', 'a', 't',
		      'e', 'm', 'e', 'n',
		      't', '\0'};
	char *ptr_str = "Assign a string to a pointer.";

	int a = strlen(name);
	int i;

	char strDes[a];
	char strDes2[a];

	strcpy(strDes, name);
	printf("%s\n", strDes);

	for (i=0; strDes[i]; i++)
		strDes2[i] = strDes[i];
	strDes2[i] = '\0';

	printf("%s\n", strDes2);
	printf("The length of str is: %ldbytes\n", strlen(str));
	printf("The length of name is: %ldbytes\n", strlen(name));
	printf("The length of ptr_str is: %ldbytes\n", strlen(ptr_str));


	return 0;
}
