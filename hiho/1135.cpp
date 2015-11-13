/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

const int MAXN = 20000 + 100;
char ori[MAXN];
int cnt[300];
int x, y, z, vis[100];
int ans, num;

void work()
{
	memset(vis, 0, sizeof vis);
	vis[x]++;vis[y]++;vis[z]++;
	vis[abs(cnt['R']-cnt['B'])]--;
	vis[abs(cnt['B']-cnt['Y'])]--;
	vis[abs(cnt['Y']-cnt['R'])]--;
	if ( !vis[x] && !vis[y] && !vis[z] ){
		num = 0;
		cnt['R'] = cnt['B'] = cnt['Y'] = 0;
	}
}

int main()
{
	scanf("%d%d%d", &x, &y, &z);
	scanf("%s", ori);
	cnt['R'] = cnt['B'] = cnt['Y'] = 0;
	int len = strlen(ori);
	ans = num = 0;


	for (int i = 0; i < len; i++){
		cnt[ori[i]]++;
		num++;
		ans = max(ans, num);
		work();
	}
	printf("%d\n", ans);

	return 0;
}*/