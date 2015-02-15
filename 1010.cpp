#include <stdio.h>
#include <math.h>
#include <string.h>


long long ten2n(char n[],int radix)
{
	long long  result = 0;
	int i = 0,j = 0;
	int len = strlen(n);
	for(i = len - 1; i >= 0; i--)
	{
		if(n[i] >= '0'&& n[i] <= '9')
		{
			result += pow(radix,len-1-i)*(n[i]-'0');
		}
		else if(n[i] >= 'a'&&n[i] <= 'z')
		{
			result += pow(radix,len-1-i)*(n[i]-'a'+10);
		}
	}
	return result;	
}


int main()
{
	//int n;
	//scanf("%d",&n);
	//printf("%lld\n",ten2n(n,2));
	long long n1_num,n2_num;
	int tag,radix,radix2;
	char n1[20],n2[20],t[20];
	int i,len,min_radix2;

	scanf("%s%s%d%d",n1,n2,&tag,&radix);
	if(tag == 2)
	{
		strcpy(t,n1);
		strcpy(n1,n2);
		strcpy(n2,t);
	}
	radix2 = radix;
	n1_num = ten2n(n1,radix);
	n2_num = ten2n(n2,radix2);
	
	if(n2_num < n1_num)
	{
		if(strlen(n2)<=1)	
		{
			radix2 = -1;	
		}
		else
		{
			while(ten2n(n2,radix2) < n1_num)
			{
				radix2++;
			}
			if(ten2n(n2,radix2) < n1_num)
				radix2 = -1;
		}
	}	
	else if(n2_num > n1_num)
	{
		len = strlen(n2);
		min_radix2 = n2[1];
		for(i = 0; i < len ;i++)
		{
			if(n2[i] > min_radix2)
				min_radix2 = n2[i];
		}
		if((min_radix2 > '0' )&&(min_radix2 < '9'))
		{
			min_radix2 -= '0';
		}
		else
		{
			min_radix2  = min_radix2 - 'a' + 10;
		}
		while((ten2n(n2,radix2) > n1_num)&&(radix2 > min_radix2))
		{
			radix2--;
		}
		if(ten2n(n2,radix2) != n1_num)
		{
			radix2 = -1;
		}
	}
	if(radix2 != -1)
		printf("%d\n",radix2);
	else
		printf("Impossible\n");

		

	return 0;
}
