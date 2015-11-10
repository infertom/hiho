/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

char st[1000];
int k, len, x;
int num[100];


int main()
{
	//freopen("in.txt", "r", stdin);

	int T;
	scanf("%d", &T);
	while ( T-- ) 
	{
		scanf("%s", st);
		scanf("%d", &k);
		len = strlen(st);
		x = len - k;

		int ans = 0;
		for (int i = 0; i < min(k, x); i++){
			num['A'] = num['T'] = num['C'] = num['G'] = 0;
			int maxNum = 0, j = i;
			while ( j < len ) num[st[j]]++, j += x;
			maxNum = max(maxNum, num['A']);
			maxNum = max(maxNum, num['T']);
			maxNum = max(maxNum, num['C']);
			maxNum = max(maxNum, num['G']);
			ans += (num['A'] + num['T'] + num['C'] + num['G'] - maxNum);
			//printf("%d  %d\n", maxNum, ans);
		}
		printf("%d\n", ans);
	}

	return 0;
}*/