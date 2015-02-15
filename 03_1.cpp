#include <stdio.h>

float f(int a[],int x)
{	
	float fx;
	fx = a[3]*x*x*x+a[1]*x*x+a[1]*x+a[0];
	return fx;
}

int main()
{
	int a[4],i;
	float left,right,mid,fm,fl,fr;
	for(i = 3; i >= 0; i--)
	{
		scanf("%d",&a[i]);
	}
	scanf("%f%f",&left,&right);
	while(right - left < 0.001)
	{
		mid = (left + right) / 2;
		fm = f(a,mid);
		fl = f(a,left);
		fr = f(a,right);
		
		if(fm > 0)
		{
			if(fl < 0)
			{
				right = mid;
			}
			else 
			{
				left = mid;
			}
		}
		else
		{
			if(fl > 0)
			{
				right = mid;
			}
			else
			{
				left = mid;
			}
		}
	}
	printf("%.2f\n",mid);
	return 0;
}
