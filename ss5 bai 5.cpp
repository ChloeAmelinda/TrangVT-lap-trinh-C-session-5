#include<stdio.h>
int main()
{
	int a,b,tich;
	for(a=1;a<=10;a++)
	{
	printf("Bang cuu chuong cua %d\n",a);
	for(b=1;b<=10;b++)
	{
		tich=a*b;
		printf("%d*%d=%d\n",a,b,tich);
	}
	}
	return 0;
}
