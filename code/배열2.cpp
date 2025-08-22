#include<stdio.h>
main()
{
	int a[4]={17, 25, 36, 45};
	int i; int* p; p=a;
	for(i=0; i<4; i++)
	{
		printf("%p\n", &a[i]);
		printf("%p\n", &p[i]);
		printf("%p\n", a+i);
		printf("%p\n", p+i);
	}
 } 
