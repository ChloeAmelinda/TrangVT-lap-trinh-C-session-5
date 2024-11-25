#include<stdio.h>
int main()
{
	int a,b,choice,tong ,hieu,tich,thuong;
	// menu
	printf("1.Tong 2 so\n");
	printf("2.Hieu 2 so\n");
	printf("3.Tich 2 so\n");
	printf("4.Thuong 2 so\n");
	printf("5.Thoat\n");
	
	//nhap 2 so
	printf("nhap so bat ki:");
	scanf("%d", &a);
	
	printf("nhap so bat ki:");
	scanf("%d", &b);
	// vong lap
	while(1)
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
				if(b!=0)
				{
					thuong = a/b;
				printf("%d / %d = %d",a,b,thuong);
				break;
				}
				else
				{
					printf("Khong the chia");
					break;
				}
				
			case 5:
				printf("Thoat");
				return 0;
			default:
		printf("loi");	
			 
		}
		
		
	}
	
	return 0;
}
