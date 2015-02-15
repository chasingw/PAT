#include <stdio.h>
#include <string.h>

int bignum_double(char num[],int a[])
{
	int i,j,len;
	memset(a,0,sizeof(int)*21);
	len = strlen(num);
	for(i = 0 ; i < len; i++)
	{
		a[i] = num[len-1-i] - '0';
	}
	for(i = 0 ; i < len; i++)
	{
		if(a[i] > 10)
		{
			a[i+1]++;
			a[i] %= 10;
			a[i] *= 2;
		}
		else if(a[i] > 4)
		{
			a[i+1]++;
			a[i] *= 2;
			a[i] %= 10;
		}
		else
		{
			a[i] *= 2;
		}
	}
	if(i)
		return len+1;
	else
		return len;
}

int is_permu_digit(int a[],int len)
{
	int n[10] = {0};
	int i;
	for(i = 0 ; i < len; i++)
	{
		n[a[i]] = 1;
	}	
	for(i = 1; i <= 9; i++)
	{
		if(!n[i])
			return 0;
	}
	return 1;
}
void print_bignum(int a[],int len)
{
	int i;
	for(i = len-1; i >=0; i--)
		printf("%d",a[i]);
	printf("\n");
}
int main()
{
	char num[21];
	int a[21];
	int len;
	scanf("%s",num);
	len = bignum_double(num,a);
	if(is_permu_digit(a,len))
		printf("Yes\n");
	else
		printf("No\n");
	print_bignum(a,len);
}
