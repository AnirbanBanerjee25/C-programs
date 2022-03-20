#include <stdio.h>
#include <string.h>
main()
{
	int l=0,i;
	char st[20],str[20],target [20],comp[30];
	char t[40];
	printf("Enter string\n");
	gets(st);
	strupr(st);
	printf("String=\n");
	puts(st);
	printf("Enter string to be concatenated");
	gets(str);
	strupr(str);
	strcat(str,st);
	printf("Concatenated string is :");
	puts(str);
	l=strlen(str);
	printf("Length of concatenated string = %d\n",l);
	strcpy(target,st);
	printf("Copied target string is :\n ");
	puts(target);
	printf("Enter string to be compared \n");
	scanf("%[^\n]s",comp);
	i=strcmp(st,comp);
	printf("%d\n",i);
	printf("Enter string to be reversed");
	scanf("%s",t);
	printf("\n Reversed string is %s",strrev(t));
	return 0;
}
