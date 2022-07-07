#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct{

	char text[3000];

} string;

void ordena(string *para, unsigned tam);

void main ()
{

	unsigned short cas;
	unsigned short i, j, k;

	scanf("%hu", &cas);

	string para[60];
	char enter[3000];


	while (cas--)
	{
		memset(para, 0, sizeof(para));
		memset(enter, 0, sizeof(enter));
		scanf(" %[^\n]", enter);

		i = j = k = 0;
		while (true)
		{
			while (enter[i] != ' ')
			{
				if (enter[i] == '\0')
					break;
				else
					para[j].text[k++] = enter[i++];
			}

			para[j].text[k] = '\0';

			if (enter[i] == '\0')
				break;
			i++; j++;
			k = 0;

		}

		j++;
		ordinance(para, j);

		for (i = 0; i < j; i++)
		{
			if (i != j && i != 0)
				printf(" ");
			printf("%s", para[i].text);
		}
		printf("\n");

	}
}

void ordinance(string *para, unsigned t)
{

	short i = 1, j;
	string piv;

	while (i < t)
	{

		j = i - 1;
		piv = para[i];

		while (j >= 0 && strlen(para[j].text) < strlen(piv.text))
		{

			para[j + 1] = para[j];
			j--;

		}

		para[j + 1] = piv;
		i++;

	}

}
