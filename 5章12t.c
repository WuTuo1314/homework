#include <stdio.h>
    int main() 
{
	int i,sum=1;
	for(i=1;i<=10;i++) 
	{
		printf("������%d�컹ʣ��%d������.\n",i,sum);
		sum=(sum+1)*2;		
	}
	printf("%d\n",sum);
	return 0;
}   


