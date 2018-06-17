#include <stdio.h>   
    int main()   
{
	int a,b;
	double c,asum=0,bsum=0,csum=0;
	for(a=1;a<=100;a++)  
	{
		asum=asum+a;
	}
	for(b=1;b<=50;b++)  
	{
		bsum=bsum+b*b; 
	}
	for(c=1;c<=10;c++)
	{
		csum=csum+1/c;
	}
	printf("%lf",asum+bsum+csum);
	return 0;
}   

