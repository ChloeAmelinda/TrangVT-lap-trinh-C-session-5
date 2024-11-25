#include<stdio.h>
int main()
{
	int a,b,UCLN;
	printf("Nhap so nguyen duong bat ki :");
	scanf("%d", &a);
	
	printf("Nhap so nguyen duong bat ki :");
	scanf("%d", &b);
	 
	if(a>0 && a>b && b>0)
	{
		UCLN = a%b;
		printf("%d la UCLN",UCLN);
	}
	else if(a>0 && b>0 && a<b)
	{
		UCLN = b%a;
		
		printf("UCLN la %d\n", UCLN);
	}

  
	return 0;
}
