/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

const int MAXN = 1000 + 100;
int matr[MAXN][MAXN];
int N, M;

int main()
{
	//freopen("in.txt", "r", stdin);

	memset(matr, 0, sizeof matr);
	scanf("%d%d", &N, &M);
	for (int i = 0; i < M; i++){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		a--;b--;
		if ( a == b ) continue;
		if ( matr[a][b] ) matr[a][b] = matr[b][a] = min(matr[a][b], c);
		else matr[a][b] = matr[b][a] = c;
	}

	for (int k = 0; k < N; k++){
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				if ( !matr[i][k] || !matr[k][j] || i == j ) continue;
				if ( matr[i][j] ) matr[i][j] = min(matr[i][j], matr[i][k] + matr[k][j]);
				else matr[i][j] = matr[i][k] + matr[k][j];
			}
		}
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			printf("%d%c", matr[i][j], (j==N-1)? '\n':' ');
		}
	}

	return 0;
}
*/
