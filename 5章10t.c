#include <stdio.h>

int main()   
{
	double i,a=2,b=1,c,s=0;   
	for(i=0;i<6;i++)
	{
		s+=a/b;  
		c=a+b;
		b=a;
		a=c;
	}
	printf("%lf\n",s);
	return 0;
}


