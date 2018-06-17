#include <stdio.h> 
  int main() 
{
	int i,j,k,a,b,c,sum=0;  
	for(i=2;i<=4;i++)   
	{
		for(j=pow(10,i);j<=pow(10,i+1)-1;j++) 
		{
			for(k=0;k<=i;k++)
			{
			sum+=pow((j%pow(10,i+1)/pow(10,i)),3);
		}
		if(sum==j)
		{
			printf("%d 是水仙花数!\n",j);
		}
		sum=0;
	}
	}
	return 0;
}   


