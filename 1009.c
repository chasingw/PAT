#include <stdio.h>

typedef struct{
	int n;
	float an;
}ElemType;

typedef struct{
	ElemType data[10];
	int length;
}pol;

int comp(int a,int b)
{
	return (a > b ? 1: a==b ? 0 :-1);
}

int pol_plus(pol *pol1,pol *pol2,pol *pol_sum)
{
	
	int i,j,k = 0;
	for(i = j = 0; i < pol1->length && j < pol2->length;) 	
	{
		switch(comp(pol1->data[i].n, pol2->data[j].n))
		{
			case 1:
			{
				pol_sum->data[k++] = pol1->data[i++];	
			}break;
			case 0:
			{
				pol_sum->data[k].n = pol1->data[i].n;
				pol_sum->data[k++].an = pol1->data[i++].an * pol2->data[j++].an;
			}break;
			case -1:
			{
				pol_sum->data[k++] = pol2->data[j++];
			}break;
		}
	}
	for(; i < pol1->length; i++)
	{
		pol_sum->data[k].n = pol1->data[i].n;
		pol_sum->data[k++].an = pol1->data[i].an;
	}
	
	for(; j < pol2->length; j++)
	{
		pol_sum->data[k].n = pol2->data[j].n;
		pol_sum->data[k++].an = pol2->data[j].an;	
	}
	pol_sum->length = k;
	return k;
}


int main()
{
	pol *polA,*polB,*pol_product,*this_A,*this_B;
	int i,j,k;
	
	scanf("%d",&polA->length);
	/*
	for(i = 0 ; i < polA->length; i++)
	{
		scanf("%d%f",&(polA->data[i].n),&(polA->data[i].an));
	}
	
	scanf("%d",&polB->length);
	for(i = 0; i < polB->length; i++)
	{
		scanf("%d%f",&polB->data[i].n,&polB->data[i].an);
	}

	pol_product->length = 0;
/*	
	for(i = 0 ; i < polA->length; i++)
	{
		for(j = 0 ; j < polB->length; j++)
		{
			this_A->data[j].n = polA->data[i].n + polB->data[j].n;
			this_A->data[j].an = polA->data[i].an * polB->data[j].an;
			pol_plus(this_A,pol_product,pol_product);
		}
	}
*/	
/*
	printf("%d",pol_product->length);
	for(i = 0; i < pol_product->length; i++)
	{
		printf(" %d %.1f",pol_product->data[i].n,pol_product->data[i].an);
	}
	printf("\n");

*/
	return 0;
}
