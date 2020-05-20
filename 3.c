#include <stdio.h>

int main()
{
	char alpha[26];
	int i, j;

	for (i = 65, j = 0; i < 91; i++, j++)
	{
		alpha[j] = i;
		printf("\nThe character of alpha is %d", alpha[j]);

	}
	getchar();
}
