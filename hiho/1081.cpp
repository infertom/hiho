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
单源最短路dijkstra算法
数组：g[][]为邻接表，dis[i]存储从起点s到i的最短路
初始化：init()，vN为点个数
参数：起点
调用：建图前init()，建图后dijkstra()
* /
/ ************************************************************************ /
//编号从0开始
const int MAXV = 1000 + 100;//最大点个数
const int INF = 10000 + 100;//无效最大值
int g[MAXV][MAXV], dis[MAXV], vN;
bool vis[MAXV];
void dijkstra(int s)
{
	int cur=s;                   
	dis[cur]=0;
	vis[cur]=1;
	for(int i=0;i<vN;i++)
	{
		for(int j=0;j<vN;j++)                     
			if(!vis[j] && ~g[cur][j] && dis[cur] + g[cur][j] < dis[j])   //未被标记且比已知的短，可更新
				dis[j]=dis[cur] + g[cur][j] ;

		int mini=INF;
		for(int j=0;j<vN;j++)                  
			if(!vis[j] && dis[j] < mini)    //选择下一次到已知顶点最短的点。
				mini=dis[cur=j];
		vis[cur]=true;
	}	
}

void init()
{
	for (int i = 0; i < vN; i++) dis[i] = INF;
	memset(g, -1, sizeof g);
	memset(vis,0,sizeof(vis));       
}

int n, m, s, t;

int main()
{
	//freopen("in.txt", "r", stdin);

	scanf("%d%d%d%d", &n, &m, &s, &t);
	s--;t--;
	vN = n;
	init();
	int a, b, c;
	for (int i = 0; i < m; i++){
		scanf("%d%d%d", &a, &b, &c);
		a--;b--;
		if ( ~g[a][b] ) g[b][a] = g[a][b] = min(g[a][b], c);
		else g[b][a] = g[a][b] = c;
	}/ *
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			printf("%d  ", g[i][j]);
		}
		printf("\n");
	}* /
	dijkstra(s);
/ *
	for (int i = 0; i < n; i++) printf("%d  ", dis[i]);printf("\n");* /
	printf("%d\n", dis[t]);

	return 0;
}*/