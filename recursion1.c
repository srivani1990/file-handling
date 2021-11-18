#include <stdio.h>
int sum(int res);
int main()
{    
    int n,a;
    printf("Enter a Number:");
    scanf("%d",&n);
    a=sum(n);
    printf("Sum of numbers = %d :",a);
        return 0;
}
int sum( int res)
{
    if(res!=0)
    {
       return res + sum(res-1);
    }
    else
    {
    return 0;
    }
    
}

