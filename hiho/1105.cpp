/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

class mCmp{
public:
	bool operator()(const int a, const int b) const{
		return a > b;
	}
};

int main()
{
	int N;
	scanf("%d", &N);

	char ch[10];
	int num;
	set<int, mCmp> temp;

	for (int i = 0; i < N;i++){
		scanf("%s", ch);
		if ( !strcmp(ch, "A") ){
			scanf("%d", &num);
			temp.insert(num);
		}else{
			num = (*temp.begin());
			temp.erase(temp.begin());
			printf("%d\n", num);
		}
	}

	return 0;
}*/