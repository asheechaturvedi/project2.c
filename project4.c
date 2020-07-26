#include<stdio.h>
main()
{
	//1. Choose any number
	printf("Pick a number : \na. 1\nb. 2\nc. 3\nd. 4\ne. 5")
	//2. Read their choice
	;int choice=0;
	scanf("%d",&choice);
	//3. Display based on their choice
	
	switch(choice)
	{
		case 1:
			printf("Food item - Cold coffee with fries \nPrice - Rs. 130");
			break;		
		case 2:
			printf("Food item - Paneer tikka roll with coldrink \nPrice - Rs. 120");
			break;
		case 3:
			printf("Food item - Manchurian sizzler \nPrice - Rs. 350");
			break;
		case 4:
		    printf("Food item - Mushroom pizza \nPrice - Rs. 150");
			break;
		case 5:
			printf("Food item - Chocolate brownie \nPrice - Rs. 60");
			break;
		default : printf("Invalid choice");	
	}
}
