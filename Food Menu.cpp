#include<stdio.h>
main()
{
	int a,qty,rate,total;
	
	do
	{
	printf("\nMenu Card \nSelect Your Food \n1. Pizaa     price = 180rs/pcs \n2. Burger     price = 100rs/pcs \n3. Dosa     price = 120rs/pcs \n4. Idli     price = 50rs/pcs\n\n");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("/nYou have selected Pizaa.\n Enter the quantity :");
			scanf("%d",&qty);
			rate = 180;
			total = qty*rate;
			printf("\nTotal amount :%d",total);
			break;
			
			case 2:
				printf("\nYou have selected Burger.\n Enter the quantity :");
				scanf("%d",&qty);
				rate = 100;
				total = qty*rate;
				printf("\nTotal amount :%d",total);
				break;
				
				case 3:
					printf("\nYou have selected Dosa.\n Enter the quantity :");
					scanf("%d",&qty);
					rate = 120;
					total = qty*rate;
					printf("\nTotal amount :%d",total);
					break;
					
					case 4:
						printf("\nYou have selected Idli.\n Enter the quantity :");
						scanf("%d",&qty);
						rate = 50;
						total = qty*rate;
						printf("\nTotal amount :%d",total);
						break;
						
						default:
							printf("\nSorry Unavailable...",a);
							break;
	}
}while (a != 5);
}
