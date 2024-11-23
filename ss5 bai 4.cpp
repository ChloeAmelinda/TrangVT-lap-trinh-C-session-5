#include<stdio.h>
int main()
{
	int a,b,tich;
	while(1)
	{
		printf("Nhap so bat ki :");
		scanf("%d",&a);
		if(a<=0)
		{
			printf("Nhap lai ");
		}
		else 
		{
			for( b=1 ;b<=10;b++)
			{
				tich = a*b;
				printf("Bang cuu chuong cua %d la %d\n",a,tich);
				
			
			}
		}
	}
	
	return 0;
}
