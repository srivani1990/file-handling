#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void compareFiles(FILE *file1, FILE *file2);
int main()
{
    	FILE *file1, *file2;
	char filename[100], c;

	printf("Enter the filename to open for comparing: \n");
	scanf("%s", filename);

	// Open one file for reading
	file1 = fopen(filename, "r");

	printf("Enter another filename to open for comparing: \n");
	scanf("%s", filename);
		file2 = fopen(filename, "r");

   if (file1 == NULL || file2 == NULL)
   {
      printf("Error : Files not open");
      exit(0);
   }
   compareFiles(file1, file2);
   fclose(file1);
   fclose(file2);
   return 0;
}
void compareFiles(FILE *file1, FILE *file2)
{
   char ch1 = getc(file1);
   char ch2 = getc(file2);
   int error = 0, pos = 0, line = 1;
   while (ch1 != EOF && ch2 != EOF){
      pos++;
      if (ch1 == '\n' && ch2 == '\n'){
         line++;
         pos = 0;
      }
      if (ch1 != ch2){
         error++;
         printf("Line Number : %d \tError"
         " Position : %d \n", line, pos);
      }
      ch1 = getc(file1);
      ch2 = getc(file2);
   }
   printf("Total Errors : %d\t", error);
}

