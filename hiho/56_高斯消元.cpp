/*
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

const int MAXN = 500 + 10;
const int MAXM = 1000 + 100;
const double EX = 1e-6;

double a[MAXM][MAXN];
int n, m;
double ans[MAXN];

void mSwap(int x, int y)
{
	for (int i = 0; i <= n; i++) {
		double temp = a[x][i];
		a[x][i] = a[y][i];
		a[y][i] = temp;
	}
}

void work(int k, int kk)
{
	for (int i = k + 1; i < m; i++){
		double temp = -1.0 * a[i][kk] / a[k][kk];
		for (int j = kk; j <= n; j++){
			a[i][j] += temp * a[k][j];
		}
	}
}

int main()
{
	freopen("in.txt", "r", stdin);

	while ( cin>>n>>m )
	{
		for (int i = 0; i < m; i++){
			for (int j = 0; j <= n; j++){
				scanf("%lf", &a[i][j]);
			}
		}

		bool flag1 = true, flag2 = true;
		int j = 0;
		for (int i = 0; i < n; i++){
			int temp = j;
			while ( temp < m && (fabs(a[temp][i]) < EX) ) temp++;

			//printf("j=%d   i=%d\n", j, i);
			if ( temp >= m ) {
				flag2 = false;
				continue;
			}
			else {
				mSwap(temp, j);
				work(j, i);
				j++;
			}
		}
/ *
		for (int i = 0; i < m; i++){
			for(int j = 0; j <= n; j++){
				printf("%f ", a[i][j]);
			}
			cout<<endl;
		}* /

		for (int i = m - 1; i >= 0; i--){
			if ( !(fabs(a[i][n-1]) < EX) ) break;
			else if ( !(fabs(a[i][n]) < EX) ){
				flag1 = false;
				break;
			}
		}
		if ( !flag1 ){
			printf("No solutions\n");
			continue;
		}
		if ( !flag2 ){
			printf("Many solutions\n");
			continue;
		}
		for (int i = n - 1; i >= 0; i--){
			double temp = a[i][n];
			for (int j = i + 1; j < n; j++){
				temp -= a[i][j] * ans[j];
			}
			ans[i] = temp / a[i][i];
		}
		for (int i = 0; i < n; i++){
			printf("%d\n", (int)ans[i]);
		}
	}


	return 0;
}*/