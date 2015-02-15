#include <iostream>
#include <string>
#include <vector>
using namespace std;
//题意是判断把一个数A乘以2之后的数B是否仍然由原来的数中的各位数构成 仅仅是排列不同

void PrintNum()

bool doublenum(string num)
{
	int c = 0;
	int t,tnum;
	vector<int> num2;
	for(int i = num.size() - 1; i >= 0; --i)
	{
		t = (num[i]-'0')*2;
		tnum = t%10 + c;
		c = t/10;
		num2.push_back(tnum);
	}
	//最高位进位
	if(c)
	{
		num2.push_back(c);
		cout<<"No"<<endl;
		PrintNum(num2);
		return;
	}
	for(int i; i < num.size(); ++i)
	{
		for(int j; j < num.size(); ++j)	
	}
	
	return num2;
}


int main()
{
	string num;

	cin>>num;	
	doublenum(num);

	return 0;
}


