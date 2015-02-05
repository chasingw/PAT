#include <stdio.h>
#include <string.h>

int main()
{
	int a,b;
	char s[20];
	scanf("%d%d", &a, &b);
	a = a + b;
	if(a < 0)
	{

	}
		//printf("-");
	sprintf(s,"%d", a);
	b = strlen(s);
	for(a = 0; a < b; a++)
	{
		if((b-1-a)%3 == 0)
			printf(",");
		printf("%d",s[a]);
	}
	printf("\n");	
	return 0;
}
