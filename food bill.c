#include<stdio.h>



//display of food bill

void displaymenu()
 {
 
printf("1.PIZZA \tprice=180rs/pcs");
printf("\n2.BURGER \tprice=100rs/pcs");
printf("\n3.DOSA \t\tprice=120rs/pcs");
printf("\n4.IDLI \t\tprice=50rs/pcs");
}
//select section

int main()

{

int select,Amount,quantity,totalBill=0;

do {

  displaymenu();
printf("\nPlease Enter your choose...:");
scanf("%d",&select);
switch(select)

{
	case 1:
		printf("\nYou have select pizza.");
		 printf("\nEnter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 180;
		break;
		
		case 2:
		printf("\nYou have select Burger.");
		 printf("\nEnter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 100;
		break;
		
		case 3:
		printf("\nYou have select Dosa.");
		 printf("\nEnter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 120;
		break;
		
		case 4:
		printf("\nYou have select Idli.");
		 printf("\nEnter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 50;
		break;
		
		default:
			printf("\nYou have not select the item.");
}

printf("Do you want to place more order ? y(1) & n(0):");
scanf("%d",&select);
}
while( select==1);

	
	printf("Your total amount is %d:",totalBill);
return 0;
}

 


