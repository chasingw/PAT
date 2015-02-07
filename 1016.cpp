#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <algorithm>

// 用sort对其排序


using namespace std;

struct record{
	string name;
	string time;	
	bool tag;
};

bool cmp(record a, record b)
{
	if(a.name < b.name)
		return true;
	else if(a.name == b.name && a.time < b.time)
	{
		return true;
	}
	else
		return false;
}

int rate[24];

int main()
{
	int in, n;
	vector<record> rec;

	for(int i = 0; i < 24; i++)	
	{
		scanf("%d",&rate[i]);
	}
	scanf("%d",&n);
	
	for(int i = 0 ; i < n; i++)
	{
		record tmp;
		string state;
		cin>>tmp.name>>tmp.time>>state;
		if(state == "on-line")
			tmp.tag = 1;
		else
			tmp.tag = 0;	
		rec.push_back(tmp);
	}	

	vector<record>::iterator it;
	for(it = rec.begin(); it != rec.end(); ++it)
	{
		cout<<(*it).name<<" "<<(*it).time+" "<<(*it).tag<<endl;
	}
			
	sort(rec.begin(), rec.end(), cmp);
	
	for(it = rec.begin(); it != rec.end(); ++it)
	{
		cout<<(*it).name<<" "<<(*it).time+" "<<(*it).tag<<endl;
	}


	cout<<rec.size()<<endl;	
	
	return 0;
}
