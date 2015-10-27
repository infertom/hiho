/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

const int MAXN = 40000 + 100;

int headE[MAXN*2+10], nextE[MAXN*2+10], toV[MAXN*2+10];
int cn;
void addEdge(int a, int b)
{
	toV[++cn] = b;
	nextE[cn] = headE[a];
	headE[a] = cn;
}

int vis[MAXN];
int n, m;
bool flag;

void dfs(int x, int a)
{
	if ( !flag ) return;

	//printf("x=%d\n", x);
	vis[x] = a;
	a ^= 1;
	for (int i = headE[x]; ~i; i = nextE[i]){
		int v = toV[i];
		if ( ~vis[v] ) {
			if ( vis[v] != a ) {
				flag = false;
				break;
			}
		}else{
			dfs(v, a);
		}
	}
}

int main()
{
	//freopen("in.txt", "r", stdin);

	int T;
	scanf("%d", &T);
	while ( T-- )
	{
		scanf("%d%d", &n, &m);
		cn = 0;
		memset(vis, -1, sizeof vis);
		memset(headE, -1, sizeof headE);
		memset(nextE, -1, sizeof nextE);
		memset(toV, -1, sizeof toV);

		int a, b;
		for (int i = 0; i < m; i++){
			scanf("%d%d", &a, &b);
			addEdge(a, b);
			addEdge(b, a);
		}

		flag = true;
		for (int i = 1; i <= n; i++){
			if ( ~vis[i] ) continue;
			dfs(i, 0);
		}
		if ( flag ) printf("Correct\n");
		else printf("Wrong\n");
	}

	return 0;
}*/