#include <stdio.h>
#include <string.h>

char number[10][6] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

int main()
{
	char num[101];
	int i,len,sum = 0,j;
	scanf("%s",num);
	len = strlen(num);
	for(i = 0; i < len; i++)
	{
		sum += (num[i]-'0');
	}
	i = 0;
	do
	{
		num[i++] = sum % 10; 
		sum /= 10;
	}
	while(sum);
	for(j = i-1 ; j >= 0; j--)
	{
		printf("%s",number[num[j]]);
		if(j)
			printf(" ");
	}
	printf("\n");
	return 0;
}
