/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

const char MONTH[20][100] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November" , "December"};

char month[100];
int day, year;

int getY(int y)
{
	int ans = y / 4;
	ans -= (y / 100);
	ans += (y / 400);

	return ans;
}

bool judge(int y)
{
	if ( (!(y%4) && (y%100)) || !(y%400) ) return true;
	else return false;
}

int main()
{
	//freopen("in.txt", "r", stdin);

	int T, kase = 1;
	scanf("%d", &T);

	while ( T-- )
	{
		printf("Case #%d: ", kase++);

		int k = 1, ans = 0;

		scanf("%s%d,%d", month, &day, &year);
		for ( ; k <= 12; k++){
			if ( !strcmp(MONTH[k], month) ) break;
		}
		k = k * 100 + day - 1;
		ans = getY(year);
		if ( judge(year) && k < 229 ) ans--;
		//printf("y=%d(%d) d=%d\n", year, getY(year), k);
		//printf("%d\n", ans);
		
		scanf("%s%d,%d", month, &day, &year);
		for (k = 1 ; k <= 12; k++){
			if ( !strcmp(MONTH[k], month) ) break;
		}
		k = k * 100 + day;
		ans = getY(year) - ans;
		if ( judge(year) && k < 229 ) ans--;
		//printf("y=%d(%d) d=%d\n", year, gety(year), k);
		//printf("%d\n", gety(year) - ((k >= 229)? 1:0));

		printf("%d\n", ans);
	}

	return 0;
}*/