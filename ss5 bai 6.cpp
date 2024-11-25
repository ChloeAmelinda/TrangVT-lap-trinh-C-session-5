#include<stdio.h>
int main()
{
	int a,b,choice,tong ,hieu,tich,thuong,thoat;
	// menu
	printf("1.Tong 2 so");
	printf("2.Hieu 2 so");
	printf("3.Tich 2 so");
	printf("4.Thuong 2 so");
	printf("Thoat");
	
	//nhap 2 so
	printf("nhap so bat ki:");
	scanf("%d", &a);
	
	printf("nhap so bat ki:");
	scanf("%d", &b);
	// vong lap
	while(choice= thoat)
	{
		// dieu kien
		switch(choice)
		{
			case 1:
				tong= a+b;
				printf("%d + %d = %d",a,b,tong);
				break;
			case 2:
				hieu=a-b;
				printf("%d -%d = %d",a,b,hieu);
				break;
			case 3:
				tich=a*b;
				printf("%d * %d = %d",a,b,tich);
				break;
			case 4:
				thuong = a/b;
				printf("%d / %d = %d",a,b,thuong);
				break;
			case 5:
				printf("Thoat");
				goto end;
			default:
		printf("Thoat");	
			 
		}
		
		
	}
	end:
	return 0;
}
