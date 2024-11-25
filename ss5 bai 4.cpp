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
				printf("%d*%d=%d\n",a,b,tich);
				
			
			}
		}
	}
	
	return 0;
}
