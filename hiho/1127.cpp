/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

/ ************************************************************************ /
/ * 
����ͼƥ�䣨�������㷨��DFSʵ�֣�
��ʼ����g[][]Ϊ�ڽӱ�uN = vN = N
uN��ƥ����ߵĶ�������vN��ƥ���ұߵĶ�������NΪ�ܶ�����
���ã�res=hungary();������ƥ����
�ŵ㣺�����ڳ���ͼ��DFS������·��ʵ�ּ���������
ʱ�临�Ӷ�:O(VE)
* /
/ ************************************************************************ /
//�����Ŵ�0��ʼ��
const int MAXV=1010;
int uN,vN;//u,v��Ŀ
int g[MAXV][MAXV];
int linker[MAXV];
bool used[MAXV];
bool dfs(int u)//����߿�ʼ������·��
{
	int v;
	for(v=0;v<vN;v++)//��������Ŵ�0��ʼ����Ҫ��1��ʼ��Ҫ�޸�
		if(g[u][v]&&!used[v])
		{
			used[v]=true;
			if(linker[v]==-1||dfs(linker[v]))
			{//������·������
				linker[v]=u;
				linker[u]=v;
				return true;
			}
		}
		return false;//�����Ҫ���ˣ������������
}

int hungary()
{
	int res=0;
	int u;
	memset(linker,-1,sizeof(linker));
	for(u=0;u<uN;u++)
	{
		if ( ~linker[u] ) continue;
		memset(used,0,sizeof(used));
		if(dfs(u)) res++;
	}
	return res;
}

int N, M;

int main()
{
	//freopen("in.txt", "r", stdin);

	scanf("%d%d", &N, &M);
	memset(g, 0, sizeof g);
	int a, b;
	for (int i = 0; i < M; i++){
		scanf("%d%d", &a, &b);
		a--;b--;
		g[a][b] = g[b][a] = 1;
	}
	uN = vN = N;

	int ans = hungary();
	printf("%d\n", ans);
	printf("%d\n", N - ans);

	return 0;
}*/