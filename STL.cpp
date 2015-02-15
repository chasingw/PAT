#include <vector>
#include <cstdio>
#include <string>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

struct record{
	vector<string> time;
	string state;
};

int main()
{
	record rec;
	string name, time, state;
	map<string, record> m;
	
	cin>>name>>time>>state;
	rec.time.push_back(time);
	rec.state = state;
	m[name] = rec;
	
	map<string, record>::iterator it;
	for(it = m.begin(); it != m.end(); it++)
	{
		cout<<(*it).first<<" "<<(*it).second.time[0]<<" "<<(*it).second.state<<endl;
	}	
	return 0;
}
