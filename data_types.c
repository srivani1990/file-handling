#include<stdio.h>
  void main()
  {
      int a=-256;
      unsigned int a1=256;
      printf("\nSize of signed int(%d): %ld byte\n",a,sizeof(a));
      printf("Size of unsigned int(%u): %ld byte\n",a1,sizeof(a1));
      
      short int b=-1234;
      unsigned short int b1=1234;
      printf("\nSize of signed short int(%d): %ld byte\n",b,sizeof(b));
      printf("Size of unsigned short int(%u): %ld byte\n",b1,sizeof(b1));
      
      long int c=-567890;
      unsigned long int c1=567890;
      printf("\nSize of signed long int(%ld): %ld byte\n",c,sizeof(c));
      printf("Size of unsigned long int(%lu): %ld byte\n",c1,sizeof(c1));
      
      long long int d=-987654;
      unsigned long long int d1=987654;
      printf("\nSize of signed long long int(%lld): %ld byte\n",d,sizeof(d));
      printf("Size of unsigned long long int(%llu): %ld byte\n",d1,sizeof(d1));
      
      char s=-45;
      unsigned char s1=45;
      printf("\nSize of signed char (%c): %ld byte\n",s,sizeof(s));
      printf("Size of unsigned char(%u): %ld byte\n",s1,sizeof(s1));
      
      float i=3.13131313;
      double j=2.13121312;
      long double k=3.1212122;
      printf("\nSize of float(%f): %ld bytes\n",i,sizeof(i));
      printf("Size of double(%lf): %ld bytes\n",j,sizeof(j));
      printf("Size of long double(%Le): %ld bytes\n",k,sizeof(k)); 
      
     
  }

