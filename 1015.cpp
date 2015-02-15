#include <stdio.h>
#include <math.h>
//0 1 不是素数　２是素数
int is_prime(int n)
{
	int m = sqrt(n);
	if(n == 0||n == 1)
		return 0;
	for(int i = 2 ; i <= m; i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int reverse(int n,int radix)
{
	int i = 0;
	int a[40];
	while(n)
	{
		a[i++] = n % radix;
		n /= radix;
	}
	n = 0;
	for(int j = 0; j < i; j++)
	{
		n += a[j] * pow(radix,i - j - 1); 
	}
	return n;
}
int main()
{
	int n,m,radix;
	while(1)
	{
		scanf("%d",&n);
		if(n < 0)	
			break;
		scanf("%d",&radix);
		m = reverse(n,radix);
		if(is_prime(n)&&is_prime(m))
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
