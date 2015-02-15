#include <stdio.h>

typedef struct{
	char ID[10];
	int score;
}str;
str *num;

int main()
{
	str p,*num;
	num = &p;
	p.score = 21;
	//scanf("%s%d",num->ID,*num->score);
	//num->score = 21;
	printf("%d\n",num->score);
	return 0;
}
