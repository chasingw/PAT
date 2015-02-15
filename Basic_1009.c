#include<stdio.h>
#include<string.h>
int main()
{
	int length;
	int end;
	int i,j;
	char words[81];
	scanf("%s",words);
	length = strlen(words);	
	end = length - 1;	
	for(i = length-1; i >= 0 ; i--)
	{
		if(words[i] == ' ')	
		{	
			for(j = i+1; j <= end; j++)
			{
				printf("%c",words[j]);
			}
			if(i != 0)
			{
				printf(" ");
			}
			end = i-1;
		}
	}	
	printf("\n");
	return 0; 
}
