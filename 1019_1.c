#include <stdio.h>

int ten2n(int n,int b,int a[])
{
	int i = 0;
	if(n == 0)
	{
		a[0] = 0;
		return 1;
	}
	while(n)
	{
		a[i++] = n % b;
		n /= b;
	}
	return i;
}
int ispali(int a[],int len)
{
	int i;
	for(i = 0; i < len/2; i++)
	{
		if(a[i] != a[len - 1 - i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n,b,len,i;
	int a[100];
	scanf("%d%d",&n,&b);
	len = ten2n(n,b,a);
	if(ispali(a,len))
		printf("Yes\n");
	else
		printf("No\n");
	for(i = len-1; i >= 0;i--)
	{
		printf("%d",a[i]);
		if(i)
			printf(" ");
		else
			printf("\n");
	}
	return 0;
}
