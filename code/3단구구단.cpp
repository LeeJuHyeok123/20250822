#include<stdio.h>
main()
{
	int  dan, chum, gugu, bun;
	for(bun=1 ; bun<4 ; bun++)
	{
	
	for(dan=2 ; dan<10 ; dan++)
	{
		printf("%d단을출력하세요\n",dan);
		for(chum=1 ; chum<10 ; chum++)
				{
					if(chum==5)
					continue;
			gugu=dan*chum;
			printf("%dX%d=%d\t", dan, chum, gugu);
			
			}
		printf("\n");
	}
}
}


