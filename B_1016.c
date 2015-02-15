#include <stdio.h>
#include <math.h>
#include <string.h>
//init git
int caln(int pa,char a[]) 
{
	int i,n = 0;;
	int len = strlen(a);
	for(i = 0; i < len; i++)
	{	
		if(a[i] == (pa+'0'))
		{
			n++;
		}			
	}
	return n;
}

int cal(int p,int n)
{
	int ans = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		ans += p*pow(10,i);
	}	
	return ans;
}
int main()
{
	char a[12],b[12];
	int pa,pb;
	int lena,lenb;
	int ans = 0;
	scanf("%s%d%s%d",a,&pa,b,&pb);
	ans = cal(pa,caln(pa,a))+cal(pb,caln(pb,b));	
	printf("%d\n",ans);
	return 0;
}
