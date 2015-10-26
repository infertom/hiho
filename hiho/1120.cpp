/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

int num;
int numA[20], numB[20];
int matr[20][20];
int k;
int n, m;

bool debug;

void mPrint()
{
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			printf("%d ", matr[i][j]);
		}
		cout<<endl;
	}
}

int getNum(int x, int y)
{
	int ans = 0;
	for (int i = x-1; i <= x+1; i++){
		for (int j = y-1; j <= y+1; j++){
			if ( (i >= 0 && i < n && j >= 0 && j < m) && matr[i][j] == -1 ) ans++;
		}
	}
	return ans;
}

bool judge()
{
	bool flag = true;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if ( matr[i][j] < 0 ) continue;

			if ( matr[i][j] != getNum(i, j) ) flag = false;
			//if ( debug && !flag ) cout<<i<<"   "<<j<<"  "<<matr[i][j]<<" "<<getNum(i, j)<<endl;
		}
	}
	return flag;
}

bool fun(int x)
{
	int a, b;
	int sig;
	for (int i = 0; i < num; i++){
		sig = ((x>>i) & 1);
		if ( sig == 1 ) sig = -1;
		else sig = -2;
		a = numA[i];
		b = numB[i];
		matr[a][b] = sig;
	}

	//if ( debug ) mPrint();
	return judge();
}

int getAns(int sig)
{
	int num = 0;
	while ( sig )
	{
		sig -= (sig&(-sig));
		num++;
	}
	return num;
}

int main()
{
	//freopen("in.txt", "r", stdin);


	scanf("%d", &k);
	while ( k-- )
	{
		num = 0; 
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				scanf("%d", &matr[i][j]);
				if ( matr[i][j] == -1 ) numA[num] = i, numB[num++] = j;
			}
		}


		int maxs = (1<<num);
		int ans = maxs - 1;
		for (int i = 0; i < maxs; i++){
			if ( fun(i) ) ans &= i;
		}
		printf("%d ", getAns(ans));
		
		ans = 0;
		for (int i = 0; i < maxs; i++){
			if ( fun(i) ) ans |= i;
		}
		printf("%d\n", getAns((maxs-1)^ans));

	}

	return 0;
}*/