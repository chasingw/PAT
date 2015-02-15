//高精度运算类bign
#include <string.h>
#include <stdio.h>


const int maxn = 1000;

struct bign
{
	int len, s[maxn];
	bign(){ memset(s, 0, sizeof(s)); len = 1;}
	
	bign operator = (const char* num)
	{
		len = strlen(num);
		for(int i = 0; i < len; i++) s[i] = num[len-i-1] - '0';
		return *this;
	}
	bign operator = (int num)
	{
		char s[maxn];
		sprintf(s, "%d", num);
		*this = s;
		return *this;
	}
	bgin(int num) { *this = num; }
	bgin(const char * num){ *this = num; }  	

};

int main()
{
	bign a;
	a = 100;	
	return 0;
}
