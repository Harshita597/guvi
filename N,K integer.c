#include<stdio.h>
void main()
{
	int K,i,N[20],n,sum=0;
	printf("enter no of element");
	scanf("%d",&n);
	printf("enter value of N");
	for(i=1;i<n;i++)
	scanf("%d\n",&N[i]);
	printf("%d",N[i]);
	printf("enter value of K");
	scanf("%d\n",&K);
	for(i=1;i<K;i++)
	{
		sum=sum+N[i];
	}
	printf("%d",sum);
	
}
