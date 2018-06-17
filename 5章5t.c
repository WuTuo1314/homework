#include <stdio.h>
  int main()
{
	int temp,i,a,n,sum=0;
	scanf("%d %d",&a,&n); 
	temp=a;
	for(i=0;i<n;i++)
	{		
		sum=sum+a;		
		printf("%d + ",a);
		a=a*10+temp;
	}
	printf("= %d .",sum);
	return 0;
}   

