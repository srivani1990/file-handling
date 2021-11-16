#include <stdio.h>
int main()
{
int a=10, b=20, c=10;
printf("For %d == %d : The output is: %d \n", a, b, a == b); 
printf("For %d == %d : The output is: %d \n", a, c, a == c); 
printf("For %d != %d : The output is: %d \n", a, c, a != c); 
printf("For %d != %d : The output is: %d \n", a, b, a != b);
printf("For %d > %d : The output is: %d \n", a, b, a > b);   
printf("For %d > %d : The output is: %d \n", a, c, a > c);   
printf("For %d < %d : The output is: %d \n", a, b, a < b);  
printf("For %d < %d : The output is: %d \n", a, c, a < c);  
printf("For %d >= %d : The output is: %d \n", a, b, a >= b);
printf("For %d >= %d : The output is: %d \n", a, c, a >= c);
printf("For %d <= %d : The output is: %d \n", a, b, a <= b);
printf("For %d <= %d : The output is: %d \n", a, c, a <= c);
return 0;

}
