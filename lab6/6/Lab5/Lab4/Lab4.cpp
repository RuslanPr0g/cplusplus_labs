#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
	FILE* filePointer;
	char ch;
	int countChars = 0;

	filePointer = fopen("lol.txt", "r");

	if (filePointer == NULL)
	{
		printf("File is not available \n");
	}
	else
	{
		while ((ch = fgetc(filePointer)) != EOF)
		{
			printf("%c", ch);
			countChars++;
		}

		fclose(filePointer);

		std::cout << "\n\nTotal characters: " << countChars;
	}

	return 0;
}