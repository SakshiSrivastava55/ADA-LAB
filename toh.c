#include<stdio.h>
void toh(int n,char src,char temp,char des)
{
	if(n==1)
	{	printf("Move disc 1 from %c to %c\n",src,des);
	      return;
	}
	else
	{	toh(n-1,src,des,temp);
		printf("Move disc %d from %c to %c\n",n,src,des);
		toh(n-1,temp,src,des);
	}
}
void main()
{	int a;
printf("Enter number of discs\n");
scanf("%d",&a);
toh(a,'s','t','d');
}
