#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[1000];  
    int i,n,count=0;
     printf("Enter  the string : ");
    scanf("%[^\n]%*c", str);
    n=strlen(str);
     for(i=0;i<n/2;i++)  
    {
    	if(str[i]==str[n-i-1])
    	count++;
  	}
 	if(count==i)
 	{
 	    printf("string is palindrome");
 	}
    else
    {
        printf("string is not palindrome");
    }
        return 0;
}

