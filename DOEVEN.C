#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	clrscr();
	printf("enter number=");
	scanf("%d",&n);
	do{
	    if(n%2==0)
	    {
	       printf("%d\t",n);
	    }
	    n--;
	  }while(i<=n);

	getch();
}