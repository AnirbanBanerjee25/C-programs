#include <stdio.h>
int rel(int *,int *);
int main()
{
	int n1,n2,i,hcf;
	scanf("%d%d",&n1,&n2);
	int k;
	k=rel(&n1,&n2);
	if (k==1)
	{
		printf("Relatively prime");
	}
	else
	{
		printf("Not relatively prime");
	}

	return 0;
}
int rel(int *n1,int *n2)
{
	int i=0,hcf,a,b;
	a=*n1;
	b=*n2;
	while(i<*n1)
	{
		if (a%i==0 && b%i==0)
		{
			hcf=i;
		}
		i++;
	}
	if(hcf==1)
	{
		return (hcf);
	}
}
