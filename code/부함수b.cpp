#include<stdio.h>
void a(void); 
void b(void); 
void c(unsigned int x);
int sum(int a, int b);
main()
{
	unsigned int num1=10, num2=20, result;
	a();
	c(1000000000);
	b();
	c(3000000000);
	printf("����\n");
	result=sum(num1,num2);
	printf("%d\n", result);
}
void a(void)
{
	printf("���ѹα�\n");
}
void b(void)
{
	printf("�ݼ�����\n");
}
void c(unsigned int x)
{
	while(x--);
	
}
int sum(int a, int b)
{
	int res = a+b ;
	return res;
	
}
