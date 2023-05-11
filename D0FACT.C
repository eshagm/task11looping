#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,fact=1;
	clrscr();
	printf("enter number=");
	scanf("%d",&n);
	do{
	    fact*=i;
	    i++;
	  }while(i<=n);
	printf("fact=%d",fact,n);
	getch();
}