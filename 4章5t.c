#include <stdio.h>        
#include <math.h>   
#define S 1000
int main()
{ int i,k;
printf("������һ��С��%d������i:",S);
scanf(" %d",&i);
if(i>S)
{printf("�������������Ҫ��������һ��С��%d������i:",S);
scanf(" %d",&i);
}
k = sqrt(i);
printf("%d��ƽ���������������ǣ�%d\n",i,k);


	return 0;
}  
