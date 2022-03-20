#include <stdio.h>
int swap(int [],int []);
int main()
{
	int a[10],b[10],i,j;
	printf("Enter elements of first array \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter elements of second array \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	swap(a,b);
	printf("Elements after swaping are : \n");
	for(i=0;i<10;i++)
	{
		printf("%d %d\n",a[i],b[i]);
	}
}
int swap(int x[],int y[])
{
	int c[10];
	int i,j;
	for(i=0;i<10;i++)
	{
		c[i]=x[i];
		x[i]=y[i];
		y[i]=c[i];
	}
	return(x,y);
}
