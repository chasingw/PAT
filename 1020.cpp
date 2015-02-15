#include <cstdio>
#include <queue>
struct BinTNode{
	int key;
	BinTNode *left;
	BinTNode *right;
}BinTNode,*BinTree;

void level_traverse(BinTree T)
{
	queue Q;
	Enqueue(T,Q);
	while(!Empty(Q))
	{
		T = DeQueue(Q);
		printf("%d\n", T->key);
		if(!T->left) EnQueue(T->left);
		if(!T->right) EnQueue(T->right);
	}
}


int main()
{
	BinTree T;
	
	int n;
	cin>>n;
	return 0;
}
