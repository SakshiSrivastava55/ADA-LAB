#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,l,key,i,j;
	int arr[10],res[10];
	printf("ENTER NUMBER OF TEST CASES\n");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		printf("ENTER THE SIZE OF ARRAY %d AND ELEMENT TO BE FOUND\n",(j+1));
		scanf("%d%d",&l,&key);
		printf("ENTER ARRAY ELEMENT\n");
		for(i=0;i<l;i++)
		{ 
			scanf("%d",&arr[i]);
			
		}
		for(i=0;i<l;i++)
		{
			if(arr[i]==key)
			{
				res[j]=1;
				break;
			}
		}
		if(i==l)
		res[j]=-1;
	}	
		printf("****OUTPUT****\n");
		for(i=0;i<n;i++)
		printf("%d\n",res[i]);
					
}
