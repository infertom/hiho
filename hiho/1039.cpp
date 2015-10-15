/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

char ori[1000], temp[1000], p[1000];

int fun()
{
	int ans = 0, sig = 0, pos = 0;
	int len = strlen(ori);
	for (int i = 0; i <= len; i++){
		if ( ori[i] != ori[pos] ){
			if ( i - pos == 1 ){
				temp[sig++] = ori[pos];
			}else{
				ans += (i - pos);
			}
			pos = i;
		}
	}
	
	temp[sig] = '\0';
	if ( !strcmp(ori, temp) ){
		return 0;
	}else{
		strcpy(ori, temp);
		return ans + fun();
	}
	

}

int xxx(char ch, int pos, int len)
{
	strcpy(ori, p);
	for (int i = len; i > pos; i--) ori[i] = ori[i-1];
	ori[len+1] = '\0';
	ori[pos] = ch;

	return fun();
}

int main()
{
	freopen("in.txt", "r", stdin);

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%s", p);
		//int ans = fun();
		//int len = strlen(ori);
		//int t = 1;
		//for (int j = 0; j < len; j++){
		//	int k = 2;
		//	for (int d = 1; d <= min(j, len-1-j); d++){
		//		if ( ori[j+d] == ori[j-d] ) k += 2;
		//		else break;
		//	}
		//	t = max(t, k);
		//}
		//ans += t;

		int len = strlen(p);
		int ans = 0;
		for (int j = 0; j <= len; j++){
			ans = max(ans, xxx('A', j, len));
			ans = max(ans, xxx('B', j, len));
			ans = max(ans, xxx('C', j, len));
		}

		printf("%d\n", ans);
	}


	return 0;
}*/