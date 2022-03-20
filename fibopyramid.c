//Anirban Banerjee REG NO-21BPS1061
//Printing Fibonacci Pyramid upto n terms.
#include <stdio.h>
main()
{
	int n,i,j,a,b,c;
	printf("Enter number of rows ");
	scanf("%d",&n);
	printf("Your Fibonacci series pyramid is ready!\n");
	for(i=1;i<=n;i++)
	{
		a=0;
		b=1;
		printf("%d\t",b);
		for(j=1;j<i;j++)
		{
			c=a+b;
			a=b;
			b=c;
			printf("%d\t",c);
		}
		printf("\n");
	}
}
