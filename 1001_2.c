#include <stdio.h>
#include <math.h>

void form_3(int n);
int main()
{
	int a,b,sum;
	
	scanf("%d%d",&a,&b);
	sum =  a + b;
	
	if(abs(sum) < 1000)
		printf("%d",sum);
	else if(abs(sum) < 1000000)
	{
		printf("%d,",sum/1000);
		form_3(abs(sum%1000));
	}
	else
	{
		printf("%d,",sum/1000000);
		form_3(abs((sum/1000)%1000));
		printf(",");
		form_3(abs(sum%1000));
	}
	printf("\n");
	return 0;
}

void form_3(int n)
{
	if(n == 0)
		printf("000");
	else if(n <10)
		printf("00%d",n);
	else if(n < 100)
		printf("0%d",n);
	else 
		printf("%d",n);
}
