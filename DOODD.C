#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	clrscr();
	printf("enter number=");
	scanf("%d",&n);
	do{
	    if(i%2==1)
	    {
	       printf("%d\t",i);
	    }
	       i++;
	  }while(i<=n);

	getch();
}