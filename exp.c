#include<stdio.h>
#include<float.h>
#include<math.h>
main()
{
	double x;
	for(x=-2;x<=4;x+=0.5)
	printf("exp(%4.1f)=%*.*f\n",xDBL_DIG+3,DBL_DIG-1,exp(x));
	return 0;
}
