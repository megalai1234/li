#include <stdio.h>
 void main() 
{
	int a,b,c,d,e,f;
	printf("\nEnter the first time limit:");
	scanf("%d %d",&a,&b);
	printf("\nEnter the second time limit:");
	scanf("%d %d",&c,&d);
	e=c-a;
	f=d-b;
	printf("\nThe hour is:%d",e);
	printf("\nThe minute is:%d",f);
  getch()	;
}
