#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,sum=0;
	clrscr();
	printf("enter number=");
	scanf("%d",&n);
	do{
	    sum+=i;
	    printf("%d\t",i);
	    i++;
	  }while(i<=n);
	printf("sum=%d",sum);


	getch();
}