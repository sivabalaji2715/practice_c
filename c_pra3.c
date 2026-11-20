#include<stdio.h>
int main()
{
	int a[5]={1,2,4,5,6};
	int n=6;
	int sum=0;
	int total;
	int i;
	total=n*(n+1)/2;
	for(i=0;i<5;i++)
	{
		sum=sum +a[i];
	}
	printf("Missing number=%d",total-sum );
	return 0;
}


		
