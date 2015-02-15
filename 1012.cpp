#include <stdio.h>
#include <string.h>
typedef struct{
	char ID[7];
	int C;
	int M;
	int E;
	int A;
}item;

int rank(int score,int list[])
{
	int rank = 0;
	for(int i = 1; i <= 100; i++)
	{
		rank += list[i];
	}
	return ++rank;
}

int search(item *find,item student[],int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		if(!strcmp(find->ID,student[i].ID))
		{
			return 1;
		}
	}
	return 0;
:close

item student[2000];
item *find;
int main()
{
	int n,m;
	char course[5] = "ACME";
	int C_list[101],M_list[101],E_list[101],A_list[101];
	int course_rank[4],max_rank,max_course;
	
	scanf("%d%d",&n,&m);
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%s%d%d%d",student[i].ID,&student[i].C,&student[i].M,&student[i].E);
		student[i].A = (student[i].C+student[i].M+student[i].E) / 3;
	}
	for(int i = 0; i < n; i++)
	{
		C_list[student[i].C]++;
		M_list[student[i].M]++;
		E_list[student[i].E]++;
		A_list[student[i].A]++;
	}	
	for(int i = 0 ;i < m; i++)
	{
		scanf("%s",find->ID);
		if(search(find,student,n))
		{
			course_rank[1] = rank(find->C,C_list);
			course_rank[2] = rank(find->M,M_list);
			course_rank[3] = rank(find->E,E_list);
			course_rank[0] = rank(find->A,A_list);
			max_rank = course_rank[0];
			for(int j = 1 ; j < 4; j++)
			{
				if(max_rank > course_rank[j])
				{
					max_rank = course_rank[j];
					max_course = j;
				}
			}
			printf("%d %c\n",max_rank,course[max_course]);
		}
		else
		{
			printf("N/A\n");
		}
	}
	return 0;
}
