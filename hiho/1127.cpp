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
二分图匹配（匈牙利算法的DFS实现）
初始化：g[][]为邻接表，uN = vN = N
uN是匹配左边的顶点数，vN是匹配右边的顶点数，N为总顶点数
调用：res=hungary();输出最大匹配数
优点：适用于稠密图，DFS找增广路，实现简洁易于理解
时间复杂度:O(VE)
* /
/ ************************************************************************ /
//顶点编号从0开始的
const int MAXV=1010;
int uN,vN;//u,v数目
int g[MAXV][MAXV];
int linker[MAXV];
bool used[MAXV];
bool dfs(int u)//从左边开始找增广路径
{
	int v;
	for(v=0;v<vN;v++)//这个顶点编号从0开始，若要从1开始需要修改
		if(g[u][v]&&!used[v])
		{
			used[v]=true;
			if(linker[v]==-1||dfs(linker[v]))
			{//找增广路，反向
				linker[v]=u;
				linker[u]=v;
				return true;
			}
		}
		return false;//这个不要忘了，经常忘记这句
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