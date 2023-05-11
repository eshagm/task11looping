#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	clrscr();
	printf("enter number=");
	scanf("%d",&n);
	do{
	    printf("%d\n",n);
	    n--;
	  }while(i<=n);

	getch();
}