#include <stdio.h> 

int main() 
{ 
	char wtl[4] = "WTL"; 
	float profit = 1.0,max = 0,data;
	int maxi = 0,n = 3,i = 0;
	while(n--)
	{
		maxi = 0;
		max = 0;
		for(i = 0; i < 3; i++)
		{
			scanf("%f",&data);
			if(data > max)	
			{
				max = data;
				maxi = i;
			}
		}
		profit *= max;
		printf("%c ",wtl[maxi]);
	}
	profit = (profit * 0.65 - 1) * 2;
	printf("%.2f\n",profit); 
	return 0;
}
