#include <stdio.h>

int main()  
{
	double sum=100,high=100,up,donw,i;
	for(i=1;i<10;i++)   
	{
		up=high/2;
		donw=up;
		high=donw;  
		sum+=donw*2;
	}
	printf("%lf %lf\n",donw,sum);
	return 0;
}  


