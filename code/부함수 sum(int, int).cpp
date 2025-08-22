#include<stdio.h>
int sum(int, int);
main()
{
	int a=10, b=20, c;
	c=sum(a,b);
	printf("%d", c);
	
}
int sum(int x, int y)
{
	int z;
	z=x+y;
	return z;
}
