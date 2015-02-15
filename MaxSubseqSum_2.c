#include <stdio.h>

int num[10000];
int main()
{
	int i,k,thissum,maxsum,n;
	int start_n,end_n,this_startn;
	scanf("%d",&k);
	for(i =0 ; i < k; i++)
		scanf("%d",&num[i]);
	thissum = 0;
	maxsum = -1;
	start_n = num[0];
	end_n = num[k-1];
	
	this_startn = num[0];
	//this_end;
	for(i = 0 ; i < k; i++)
	{
		thissum += num[i];
		if(thissum > maxsum)
		{
			maxsum = thissum;
			end_n = num[i];
			start_n = this_startn;
		}	
		else if(thissum < 0)
		{
			thissum = 0;
			this_startn = num[i+1];
		}
	}
	if(maxsum < 0)

	{
		maxsum = 0;
		start_n = num[0];
		end_n = num[k-1];
	}
	printf("%d %d %d\n",maxsum,start_n,end_n);
	return 0;
}
