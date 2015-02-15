#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct id_lv	//广度优先探测结构
{
	int id;		//id
	int level;	//所在层
};

int main()
{
	int n,m;
	int num_kid[100]={0};	//记录相应编号的节点的子女数
	vector<int> kid[100];	//记录相应编号节点的子女
	cin>>n>>m;	//n没有作用

	int i,j;
	int id,id1;
	for(i=0;i<m;i++)	//输入非叶节点信息
	{
		cin>>id;
		cin>>num_kid[id];
		for(j=0;j<num_kid[id];j++)
		{
			cin>>id1;
			kid[id].push_back(id1);
		}
	}

	int no_child[101]={0};	//记录各层的无子女节点数，层数从1开始计数
	int max_level=0;		//记录树的层数
	queue<id_lv> wf;		//用于广度优先探测
	id_lv tempi;	//预处理
	tempi.id=1;
	tempi.level=1;
	wf.push(tempi);
	while(!wf.empty())	//广度优先
	{
		if(num_kid[wf.front().id]!=0)	//节点有子女
			for(i=0;i<num_kid[wf.front().id];i++)
			{
				tempi.id=kid[wf.front().id][i];
				tempi.level=wf.front().level+1;
				wf.push(tempi);
				if(tempi.level>max_level)
					max_level=tempi.level;
			}
		else						//节点无子女
			no_child[wf.front().level]++;
		wf.pop();
	}

	cout<<no_child[1];	//输出
	for(i=2;i<=max_level;i++)
		cout<<" "<<no_child[i];

	return 0;
}

