#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct{

	char line[60];

} string;


void main ()
{

	unsigned short i, j;
	string lines[300];
	char text[10000], *lineTmp;

	while (scanf(" %[^\n]", text) != EOF)
	{

		i = 0;
		lineTmp = strtok(text, " ");
		strcpy(lines[i++].line, lineTmp);

		do
		{

			lineTmp = strtok('\0', " ");

			if (lineTmp)
				strcpy(lines[i++].line, lineTmp);

		} while (lineTmp);


		j = 1;
		unsigned short alliteration = 0;
		unsigned short contains= 0;

		while (j < i)
		{

			while (tolower(lines[j].line[0]) == tolower(lines[j - 1].line[0]))
			{
				contains += 2;
				j++;
			}

			j++;
			if (contains >= 2)
				alliteration++;

			contains = 0;

		}

		printf("%hu\n", alliteration);

	}

    return 0;
}
