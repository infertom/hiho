/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

const double EX = 1e-6;

char op[100][100];
double num[100];

bool judge(int p, double x)
{
	if ( !strcmp(op[p], "<") ){
		return ( (x - num[p]) < EX );
	}else if ( !strcmp(op[p], "<=") ){
		return ( (x - num[p]) < EX || fabs(x - num[p]) < EX );
	}else if ( !strcmp(op[p], "=") ){
		return ( fabs(x - num[p]) < EX );
	}else if ( !strcmp(op[p], ">") ){
		return ( x - num[p] > EX );
	}else if ( !strcmp(op[p], ">=") ){
		return ( x - num[p] > EX || fabs(x - num[p]) < EX );
	}else {
		return false;
	}
}

int main()
{
	//freopen("in.txt", "r", stdin);
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%s", op[i]);
		scanf("%s", op[i]);
		scanf("%lf", &num[i]);
	}

	int ans = 0;
	for (double i = -1; i < 1100; i += 0.5){
		int k = 0;
		for (int j = 0; j < n; j++){
			if ( judge(j, i) ) k++;
		}
		ans = max(ans, k);
	}


	printf("%d\n", ans);

	return 0;
}*/