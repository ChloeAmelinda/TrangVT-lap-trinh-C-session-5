#include<stdio.h>
int main()
{
	int a,b,ucln,bcnn;
	printf("Nhap so nguyen duong bat ki :");
	scanf("%d",&a);
	printf("Nhap so nguyen duong bat ki :");
	scanf("%d",&b);
	while (a>0 , b>0, a!=b)
	{
		if(a>b)
		{
			ucln = a-b;
			bcnn = ( a * b)/ ucln;
			printf("%d la bcnn",bcnn);
		}
		else
		{
			ucln = b -a;
			bcnn= (a*b)/ucln;
			printf("%d la bcnn",bcnn);
			
		}
	}
	return 0;
}
