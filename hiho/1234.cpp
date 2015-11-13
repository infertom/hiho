/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

const double INF = 1e-10;
double l, r, x;

int main()
{
	int T;
	scanf("%d", &T);
	while ( T-- )
	{
		int ans = 0;
		l = 0;
		r = 0.5;
		scanf("%lf", &x);
		
		if ( fabs(x) < INF ){
			printf("-1\n");
			continue;
		}

		for(int i = 0; i < 3000; i++){
			l = (r+l) / 2;
			if ( l - x > INF ){
				ans += 4;
				break;
			}else if ( x - l > INF ){
				ans += 4;
			}else{
				ans = -1;
				break;
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}*/