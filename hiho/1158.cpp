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

const int MAXN = 1000 + 100;
int num[MAXN], n;
int vis[MAXN], matr[MAXN][MAXN];
int k;

int dfs(int x, int a)
{
	//printf("x=%d a=%d\n", x, a);
	int amount = 1;
	vis[x] = 1;
	k += a;
	for (int i = 0; i < n; i++){
		if ( !matr[x][i] || vis[i] ) continue;
		amount += dfs(i, a^1);
	}
	return amount;
}

int main()
{
	//freopen("in.txt", "r", stdin);

	int T, kase = 1;
	scanf("%d", &T);
	getPrime(500000);

	while ( T-- )
	{
		printf("Case #%d: ", kase++);
		memset(vis, 0, sizeof vis);
		memset(matr, 0, sizeof matr);

		scanf("%d", &n);
		for (int i = 0; i < n; i++){
			scanf("%d", &num[i]);
		}

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if ( (!(num[j] % num[i]) && isPrime[num[j]/num[i]]) || (!(num[i] % num[j]) && isPrime[num[i]/num[j]]) ){
					matr[i][j] = matr[j][i] = 1;
				}
			}
		}

		//for (int i = 0; i < n; i++){
		//	for (int j = 0; j < n; j++){
		//		printf("%d ", matr[i][j]);
		//	}
		//	printf("\n");
		//}

		int ans = 0;
		for (int i = 0; i < n; i++){
			if ( vis[i] ) continue;
			k = 0;
			int amount = dfs(i, 1);
			ans += max(k, amount - k);
			//printf("i=%d k=%d\n", i, k);
		}

		printf("%d\n", ans);
	}

	return 0;
}
*/
