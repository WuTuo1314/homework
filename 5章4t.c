#include<stdio.h>
int main() 
{
	char ch;
	int a=0,b=0,c=0,d=0,e=0;
	printf("Please input the string\n");
	while((ch=getchar())!='\n')  
	{
		if(ch<='z'&&ch>='a')
		{
			a++;
		}
		else if(ch==' ')
		{
			c++;
		}
		else if(ch<58&&ch>47)
		{
			d++;
		}
		else if(ch<='Z'&&ch>='A')
		{
			b++;
		}
		else
		{
			e++;
		}
	}
	printf("��д%d Сд%d �ո�%d ����%d ����%d\n",a,b,c,d,e);
	  return 0;
}  


 
