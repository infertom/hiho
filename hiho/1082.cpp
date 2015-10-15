/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

char x[] = "marshtomp";
char y[] = "fjxmlhx";

char toLow(char ch)
{
	if ( ch >= 'A' && ch <= 'Z' ) return (ch - 'A') + 'a';
	else return ch;
}

int main()
{
	freopen("in.txt", "r", stdin);

	char ori, temp, t[1000];
	int pos = 0;
	int len = strlen(x);

	while ( scanf("%c", &ori) != EOF )
	{
		temp = toLow(ori);
		if ( temp == x[pos] ) t[pos++] = ori;
		else {
			if ( pos == len ) printf("%s", y);
			else for (int i = 0; i < pos; i++) printf("%c", t[i]);
			printf("%c", ori);
			pos = 0;
		}
	}

	return 0;
}
*/
