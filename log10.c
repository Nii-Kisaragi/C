#include<stdio.h>
#include<math.h>

main()
	int i;
	double x=1/100;
	for(i=1;i<=10;i++)
	{
		printf("log10(%8.8g)=%f\n",x,log10(x));
		x*=10;
	}
	return 0;
}
