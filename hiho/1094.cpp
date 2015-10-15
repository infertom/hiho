#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

char matr[300][300], v[5][5];
char temp[5][5];

void changeV(int n)
{
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			temp[j][n-1-i] = v[i][j];
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			v[i][j] = temp[i][j];
		}
	}
}

bool judge(int x, int y)
{
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if ( matr[x+i][y+j] != v[i][j] ) return false;
		}
	}
	return true;
}

int main()
{
	freopen("in.txt", "r", stdin);

	int n, m;
	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++){
		scanf("%s", matr[i]);		
	}
	for (int i = 0; i < 3; i++){
		scanf("%s", v[i]);
	}

	for (int i = 0; i < n - 2; i++){
		for (int j = 0; j < m - 2; j++){
			for (int k = 0; k < 4; k++){
				if ( judge(i, j) ) {
					printf("%d %d\n", i+2, j+2);
					break;
				}
				changeV(3);
			}
		}
	}

	return 0;
}