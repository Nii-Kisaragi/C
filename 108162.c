//やあ
#include<stdio.h>
int main()
{
	int i;
	printf("10|8進|16| 2進表記 \n");
	printf("------------------ \n");
	for(i=0;i<16*16;i++)
	printf("%3d|%03o|%02X|%s\n",i,i,i,c10_2(i,8));
	return 0;
}
