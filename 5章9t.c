#include <stdio.h>

int main()
{
	int i,j,r;
	for(i=1;i<=1000;i++)   
	{
		r=0;  
		for(j=1;j<i;j++)
		{
			if(i%j==0)   
			{
				r=r+j;   
			}
		}
		if(r==i)  
		{
			printf("%d ������.\n",i);
		}
	}
	return 0;
}   


