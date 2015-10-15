/*
#include <cstdio>
#include <cstring>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

const int MAXN = 1000 + 100;

int matr2[MAXN][MAXN], matr5[MAXN][MAXN];
int f2[MAXN][MAXN] = {0}, f5[MAXN][MAXN] = {0};
int n;

int getNum(int num, int p)
{
	int ans = 0;
	while ( !(num % p) ) ans++, num /= p;
	return ans;
}

int getAns2()
{
	memset(f2, -1, sizeof f2);
	f2[0][0] = matr2[0][0];

	int i = 0;
	for (int sum = 0; sum <= 2 * n - 2; sum++){
		for (int j = sum - i; j < n && sum - j >= 0; j++){
			int x = sum - j;
			int y = j;
			if ( matr2[x][y] == -1 || f2[x][y] == -1 ) continue;
			if ( x + 1 < n && ~matr2[x+1][y] ){
				if ( ~f2[x+1][y] ) f2[x+1][y] = min(f2[x+1][y], f2[x][y] + matr2[x+1][y]);
				else f2[x+1][y] = f2[x][y] + matr2[x+1][y];
			} 
			if ( y + 1 < n && ~matr2[x][y+1] ){
				if ( ~f2[x][y+1] ) f2[x][y+1] = min(f2[x][y+1], f2[x][y] + matr2[x][y+1]);
				else f2[x][y+1] = f2[x][y] + matr2[x][y+1];
			}
		}
		i = min(i + 1, n - 1);
	}

	return f2[n-1][n-1];
}

int getAns5()
{
	memset(f5, -1, sizeof f5);
	f5[0][0] = matr5[0][0];
	
	int i = 0;
	for (int sum = 0; sum <= 2 * n - 2; sum++){
		for (int j = sum - i; j < n && sum - j >= 0; j++){
			int x = sum - j;
			int y = j;
			if ( matr5[x][y] == -1 || f5[x][y] == -1 ) continue;
			if ( x + 1 < n && ~matr5[x+1][y] ){
				if ( ~f5[x+1][y] ) f5[x+1][y] = min(f5[x+1][y], f5[x][y] + matr5[x+1][y]);
				else f5[x+1][y] = f5[x][y] + matr5[x+1][y];
			} 
			if ( y + 1 < n && ~matr5[x][y+1] ){
				if ( ~f5[x][y+1] ) f5[x][y+1] = min(f5[x][y+1], f5[x][y] + matr5[x][y+1]);
				else f5[x][y+1] = f5[x][y] + matr5[x][y+1];
			}
		}
		i = min(i + 1, n - 1);
	}

	//for (int i = 0; i < n; i++){
	//	for (int j = 0; j < n; j++){
	//		printf("%d  ", f5[i][j]);
	//	}
	//	cout<<endl;
	//}
	

	return f5[n-1][n-1];
}

int main()
{
	//freopen("in.txt", "r", stdin);

	int num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0;  j < n; j++){
			scanf("%d", &num);
			if ( num == 0 ) {
				matr2[i][j] = -1;
				matr5[i][j] = -1;
			}
			else {
				matr2[i][j] = getNum(num, 2);
				matr5[i][j] = getNum(num, 5);
			}
		}
	}

	//for (int i = 0; i < n; i++){
	//	for (int j = 0; j < n; j++){
	//		printf("%d(%d)  ", matr2[i][j], matr5[i][j]);
	//	}
	//	cout<<endl;
	//}
	//cout<<getAns2()<<"  "<<getAns5()<<endl;

	printf("%d\n", min(getAns2(), getAns5()));

	return 0;
}*/