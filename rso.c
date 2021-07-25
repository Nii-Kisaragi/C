#include<stdio.h>
#include<limits.h>
int main()
{
	char *c10_2(unsigned long,unsigned);
	unsigned short int i, s=CHAR_BIT*sizeof i;
	signed short int j;
	for(i=0;i<s;i++)printf("%6u:%s\n",170>>i,c10_2(170>>i,s));
	puts("");
	for(i=0;i<s;i++)printf("%6u:%s\n",43690U>>i,c10_2(43690U>>i,s));
	puts("");
	for(j=0;j<s;j++)printf("%6d:%s\n",-123>>j,c10_2(-123>>j,s));
	return 0;
}
