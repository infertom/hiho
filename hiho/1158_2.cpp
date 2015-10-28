/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

const int MAXP = 500000 + 100;

int prime[MAXP] = {0};
bool isPrime[MAXP];
int getPrime(int maxn)
{
	int n = 0;
	int k = (int) sqrt(maxn + 0.5);
	memset(isPrime, true, sizeof(isPrime));
	isPrime[1] = false;
	for (int i = 2; i <= maxn; i++)
	{
		if ( isPrime[i] )
		{
			prime[n++] = i;
			if ( i <= k ){
				for (int j = i * i; j <= maxn; j += i) isPrime[j] = false;
			}
		}
	}
	return n;
}

/ ************************************************************************ /
/ * 
最小点覆盖的点数 = 二分图最大匹配（König定理）
最大独立集 = 总点数 - 二分图最大匹配
二分图匹配（匈牙利算法的DFS实现）
初始化：g[][]为邻接表，uN = vN = N
uN是匹配左边的顶点数，vN是匹配右边的顶点数，N为总顶点数
调用：res=hungary();输出最大匹配数
优点：适用于稠密图，DFS找增广路，实现简洁易于理解
时间复杂度:O(VE)
* /
/ ************************************************************************ /
//顶点编号从0开始的
const int MAXV=1000 + 100;
int uN,vN;//u,v数目
int g[MAXV][MAXV] = {0};
int linker[MAXV] = {-1};
bool used[MAXV];
bool dfs(int u)//从左边开始找增广路径
{
	for(int v = 0; v < vN; v++)//这个顶点编号从0开始，若要从1开始需要修改
		if( g[u][v] && !used[v] )
		{
			used[v]=true;
			if( linker[v]==-1 || dfs(linker[v]) )
			{//找增广路，反向
				linker[v] = u;
				linker[u] = v;
				return true;
			}
		}
		return false;//这个不要忘了，经常忘记这句
}

int hungarian()
{
	int res=0;
	memset(linker, -1, sizeof(linker));
	for(int u = 0; u < uN; u++)
	{
		if ( ~linker[u] ) continue;
		memset(used, 0, sizeof(used));
		if( dfs(u) ) res++;
	}
	return res;
}

const int MAXN = 1000 + 100;
int num[MAXN], n;

int main()
{
	//freopen("in.txt", "r", stdin);

	int T, kase = 1;
	scanf("%d", &T);
	getPrime(500000);

	while ( T-- )
	{
		printf("Case #%d: ", kase++);
		memset(g, 0, sizeof g);
		memset(linker, -1, sizeof linker);

		scanf("%d", &n);
		for (int i = 0; i < n; i++){
			scanf("%d", &num[i]);
		}

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if ( (!(num[j] % num[i]) && isPrime[num[j]/num[i]]) || (!(num[i] % num[j]) && isPrime[num[i]/num[j]]) ){
					g[i][j] = g[j][i] = 1;
				}
			}
		}
		uN = vN = n;

		/ *for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				printf("%d ", g[i][j]);
			}
			printf("\n");
		}* /

		int ans = hungarian();

		printf("%d\n", n - ans);
	}

	return 0;
}
*/
