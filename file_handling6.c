#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
	FILE *file1, *file2;
	char filename[100], c;

	printf("Enter the filename to open for reading: \n");
	scanf("%s", filename);

	// Open one file for reading
	file1 = fopen(filename, "r");
	if (file1 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

	printf("Enter the filename to open for writing: \n");
	scanf("%s", filename);

	// Open another file for writing
	file2 = fopen(filename, "w");
	if (file2 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

