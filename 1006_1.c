#include <stdio.h>
#include <string.h>

int main()
{
	int M;
	char first_ID[16],last_ID[16],this_ID[16];
	int in_h,in_m,in_s,out_h,out_m,out_s,in_time,out_time,min_time = 1000000,max_time = 0;
	scanf("%d",&M);
	while(M--)
	{
		scanf("%s%d:%d:%d%d:%d:%d",this_ID,&in_h,&in_m,&in_s,&out_h,&out_m,&out_s);
		in_time = in_h*10000+in_m*100+in_s;
		out_time = out_h*10000+out_m*100+out_s;
		if(in_time < min_time)
		{
			min_time = in_time;
			strcpy(first_ID,this_ID);
		}
		if(out_time > max_time)
		{
			max_time = out_time;
			strcpy(last_ID,this_ID);
		}
	}
	printf("%s %s\n",first_ID,last_ID);
	return 0;
}
