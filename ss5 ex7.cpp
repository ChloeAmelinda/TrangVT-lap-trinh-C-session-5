#include<stdio.h>
int main()
{
	int a,b,ucln;
	printf("Nhap so nguyen duong bat ki :");
	scanf("%d",&a);
	printf("Nhap so nguyen duong bat ki :");
	scanf("%d",&b);
	while (a>0 , b>0, a!=b)
	{
		if(a>b)
		{
			ucln = a-b;
			printf("%d la ucln",ucln);
		}
		else
		{
			ucln = b -a;
			printf("%d la ucln",ucln);
			
		}
	}
	return 0;
}
