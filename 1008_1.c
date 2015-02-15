#include <stdio.h>
#define	UPTIME 6
#define DOWNTIME 4
#define	STOPTIME 5
int main()
{
	int next,n,time,this,t;
	time = this = 0;
	
	scanf("%d",&n);

	while(n--)
	{
		scanf("%d",&next);
		t = next - this;
		this = next;
		if(t > 0)
		{
			time += t*UPTIME;
		}
		else
		{
			time += -t*DOWNTIME;
		}
		time += STOPTIME;
	}
	printf("%d\n",time);
	return 0;
}
