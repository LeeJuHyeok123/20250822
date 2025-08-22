#include<stdio.h>
main()
{
	int a[4]={7, 8, 101, 1207};
	int i;
	for(i=0; i<4; i++)
	{
		printf("%d\n", a[i]);
		printf("%p\n", a+i);
		printf("%p\n", &a[i]);
	}
}
