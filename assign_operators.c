#include <stdio.h>

int main()
{
    int i=5,j=4;

i += j; //Same as i = i + j
printf("i = %d \n", i);
i -= j; //Same as i = i - j
printf("i = %d \n", i);
i *= j; //Same as i = i * j
printf("i = %d \n", i);
i /= j; //Same as i = i / j
printf("i = %d \n", i);
i %= j; //Same as i = i % j
printf("i = %d \n", i);
i = j;
printf("i = %d \n", i);
return 0;
}

