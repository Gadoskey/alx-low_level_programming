#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	char password[13];

	srand(time(0));
	for (i = 0; i < 12; i++)
	{
		password[i] = rand() % 94 + 33;
	}
	 password[12] = '\0';
	 printf("%s\n", password);
	 return (0);
}
