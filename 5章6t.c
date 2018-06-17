#include <stdio.h>   

int main() 
{
	int i,j,k,sum=0,m=1;
	scanf("%d",&k);
	for(i=1;i<=k;i++) 
	{
		for(j=1;j<=i;j++)
		{
			m=m*j;   
		}  
		sum=sum+m;
		m=1;
	}
	printf("%d",sum);   
	return 0; 
}   


