#include<stdio.h>
int main()
{
	int a[6]={10,20,35,45,30,66};
	int largest;
	int second;
	int i;
	largest=0;
	second=0;
	for(i=0;i<6;i++)
	{
		if(a[i]>largest)
		{
			second=largest;
			largest=a[i];
		}
		else if(a[i]>second && a[i]!=largest)
		{
			second=a[i];
		}
	}
	printf("Second largest=%d",second);
	return 0;
}


