#include<stdio.h>
int main()
{
#define PI 3.1415926
double s;
int r;
printf("please input r:\n");
scanf("%d",&r);
	s= PI*r*r;
	printf("%f,%d",PI,r);
	printf("%f",s);
return 0;
}   
