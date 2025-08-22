#include<stdio.h>
main()
{
	int dan=2 , chum=1 , gugu=0 , bun=0;
	while(bun<3) 
	{
	
	while(dan<10)
	{
		while(chum<10)
		{
			(gugu=dan*chum);
			printf("%dX%d=%d\t" ,dan, chum, gugu);
			chum++;
		}
	
		dan++;
		chum=1;
		printf("\n");
	
	}
	bun++;
	dan=2;
}
	
}
