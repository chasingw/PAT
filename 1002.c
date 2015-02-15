#include <stdio.h>

typedef struct{
	int n;
	float an;
}pol;
int comp(int a,int b)
{
	return (a > b ? 1: a==b ? 0 :-1);
}
int main()
{
	pol pol1[10],pol2[10],pol_sum[20];
	int i,j,k1,k2,k;
	scanf("%d",&k1);
	for(i = 0 ; i < k1; i++)
	{
		scanf("%d%f",&pol1[i].n,&pol1[i].an);
	}
	scanf("%d",&k2);
	for(i = 0; i < k2; i++)
	{
		scanf("%d%f",&pol2[i].n,&pol2[i].an);
	}
	k = 0;
	for(i = j = 0; i < k1 && j < k2;) 	
	{
		switch(comp(pol1[i].n, pol2[j].n))
		{
			case 1:
			{
				pol_sum[k++] = pol1[i++];	
			}break;
			case 0:
			{
				pol_sum[k].n = pol1[i].n;
				pol_sum[k++].an = pol1[i++].an + pol2[j++].an;
				if(pol_sum[k-1].an == 0) //系数等于0
				{
					k--;
				}
			}break;
			case -1:
			{
				pol_sum[k++] = pol2[j++];
			}break;
		}
	}
	
	for(; i < k1; i++)
	{
		pol_sum[k].n = pol1[i].n;
		pol_sum[k++].an = pol1[i].an;
	}
	
	for(; j < k2; j++)
	{
		pol_sum[k].n = pol2[j].n;
		pol_sum[k++].an = pol2[j].an;	
	}
	
	printf("%d",k);
	for(i = 0; i < k; i++)
	{
		printf(" %d %.1f",pol_sum[i].n,pol_sum[i].an);
	}
	printf("\n");
	return 0;
}
