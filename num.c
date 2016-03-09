//Write a program that asks the user for a number n and gives him the possibility to choose between computing the sum and computing the product of 1,…,n.

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,ch,s=0,p=1;
	printf("enter a no");
	scanf("%d",&n);
	
	printf("\n 1. SUM OF %d NUMBERS",n);
	printf("\n 2. PRODUCT OF %d NUMBERS",n);
	printf("\n    ENTER YOUR CHOICE  : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : for(i=1;i<=n;i++)
				s=s+i;
			 printf("\n SUM OF FIRST %d NUMBER IS" = %d,n,s);
			 break;
		case 2 : for(i=1;i<=n;i++)
				p=p*i;
			 printf("\n PRODUCT OF FIRST %d NUMBER IS" = %d,n,p);
			 break;
		default : printf("\n WRONG CHOICE);
	}
	getch();
	return 0;
}
