#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAXN = 300 + 10;

int n;
int a[MAXN][MAXN], b[MAXN][MAXN];
int temp[MAXN][MAXN];

void mCopy()
{
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			temp[i][j] = a[i][j];
		}
	}
}

void printMatr()
{
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n ; j++){
			printf("%d ", temp[i][j]);
		}
		cout<<endl;
	}
	cout<<endl;
}

void swapRow(int x, int y)
{
	if ( x == y ) return ;
	for (int i = 0; i < n; i++){
		temp[x][i] ^= temp[y][i];
		temp[y][i] ^= temp[x][i];
		temp[x][i] ^= temp[y][i];
	}
}

void swapColumn(int x, int y)
{
	if ( x == y ) return ;
	for (int i = 0; i < n; i++){
		temp[i][x] ^= temp[i][y];
		temp[i][y] ^= temp[i][x];
		temp[i][x] ^= temp[i][y];
	}
}

int getRow(int x)
{
	int ans = 0;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if ( b[i][x] == temp[j][0] ){
				swapRow(i, j);
				ans++;
				break;
			}
		}
	}
	//printMatr();

	return ans;
}

int getColumn(int x)
{
	int ans = 0;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if ( b[x][i] == temp[0][j] ){
				swapColumn(i, j);
				ans++;
				break;
			}
		}
	}
	//printMatr();

	return ans;
}

bool judge()
{
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if ( temp[i][j] != b[i][j] ) return false;
		}
	}
	return true;

}

int main()
{
	freopen("in.txt", "r", stdin);

	scanf("%d", &n);
	for (int i  = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for (int i  = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &b[i][j]);
		}
	}

	int ans = 1e8;
	for (int i = 0; i < n ; i++){
		mCopy();
		int k = getRow(i) + getColumn(0);
		if ( judge() ) ans = min(ans, k);
	}

	if ( ans == (int)1e8 ) printf("-1\n");
	else printf("%d\n", ans);

	return 0;
}