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
��Դ���·dijkstra�㷨
���飺g[][]Ϊ�ڽӱ�dis[i]�洢�����s��i�����·
��ʼ����init()��vNΪ�����
���������
���ã���ͼǰinit()����ͼ��dijkstra()
* /
/ ************************************************************************ /
//��Ŵ�0��ʼ
const int MAXV = 1000 + 100;//�������
const int INF = 10000 + 100;//��Ч���ֵ
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
			if(!vis[j] && ~g[cur][j] && dis[cur] + g[cur][j] < dis[j])   //δ������ұ���֪�Ķ̣��ɸ���
				dis[j]=dis[cur] + g[cur][j] ;

		int mini=INF;
		for(int j=0;j<vN;j++)                  
			if(!vis[j] && dis[j] < mini)    //ѡ����һ�ε���֪������̵ĵ㡣
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