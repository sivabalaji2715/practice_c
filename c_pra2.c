#include<stdio.h>
int main()
{
	int a[6]={10,20,30,20,10,40};
	int i,j,k;
	int n=6;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;

			}
		}
	}
	printf("Array after remaining duplicates:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}




