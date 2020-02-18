#include<stdio.h>
#include<time.h>
void search(int low,int high,int arr[],int key)
{ int mid;
  while(low<=high)
  { mid=(low+high)/2;
    if(arr[mid]==key){
       printf("ELEMENT FOUND AT:%d\n",(mid+1));
       break;
       }
       else if(arr[mid]>key)
           return search(low,mid-1,arr,key);
       else
           return search(mid+1,high,arr,key);
   }
 }
void linsearch(int arr[],int n,int ele,int i)
{
while(i<n){
  if(arr[i]==ele){
     printf("ELEMENT FOUND AT:%d\n",(i+1));
     break;
     }
     else
     return linsearch(arr,n,ele,i+1);
     }
}     
                    
int main()
{	int n,key;
	clock_t start,stop;
	printf("ENTER n:\n");
	scanf("%d",&n);
	int arr[n];
	printf("ENTER THE ELEMENTS:\n");
	for(int i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	  printf("ENTER KEY:\n");
	  scanf("%d",&key);
	  printf("**LINEAR SEARCH**\n");
	  start=clock();
	  linsearch(arr,n,key,0);
	  stop=clock();
	  printf("DURATION:%ld\n",(stop-start));
	  printf("\n**BINARY SEARCH**\n");
	  start=clock();
	  search(0,n-1,arr,key);
	  stop=clock();
	  printf("DURATION:%ld",(stop-start));
}	  
	  
	  	  
  	
