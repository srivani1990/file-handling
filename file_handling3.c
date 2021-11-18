#include <stdio.h>
#include <string.h>
int main()
{
   FILE *fp;
   char str[80];
 
   fp = fopen("test.txt", "a");
 
   printf("Enter your message:");
   fgets(str,19,stdin);
 
   fprintf(fp, "%s",str);
 
   printf("Your message is appended in data.txt file.");
   fclose(fp);
   //File validation is to be added..
   return 0;

}
