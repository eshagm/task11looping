#include<stdio.h>
#include<conio.h>

void main()
{
	int i=2000,n;
	clrscr();
	printf("enter leap number=");
	scanf("%d",&n);
	do{
	   if(i%4==0)
	   {
	      printf("%d\t",i);
	   }
	   i++;
	 }while(i<=n);
	getch();
}