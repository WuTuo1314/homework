#include <stdio.h>
    int main() 
{
	int i,sum=1;
	for(i=1;i<=10;i++) 
	{
		printf("倒数第%d天还剩有%d个桃子.\n",i,sum);
		sum=(sum+1)*2;		
	}
	printf("%d\n",sum);
	return 0;
}   


