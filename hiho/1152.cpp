/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <set>
#include <string>
using namespace std;
typedef long long ll;

string ori;
string temp;
bool vis[1000];
int cnt[300];
set<string> ans;

bool judge()
{
	int num = 0;
	memset(cnt, 0, sizeof cnt);
	for (int i = 0; i < temp.size(); i++) {
		if ( !cnt[temp[i]] ) num++, cnt[temp[i]]++;
	}
	//cout<<temp<<"  "<<num<<endl;
	return vis[num];
}

int main()
{
	//freopen("in.txt", "r", stdin);

	cin>>ori;
	int len = ori.size();
	memset(vis, false, sizeof vis);
	vis[0] = vis[1] = vis[2] = vis[3] = vis[5] = vis[8] = vis[13] = vis[21] = vis[34] = true;
	ans.clear();

	for (int i = 0; i < len; i++){
		for (int j = 1; j <= len-i; j++){
			temp = ori.substr(i, j);
			//cout<<"i="<<i<<" j="<<j<<"  "<<temp<<endl;
			if ( judge() ) ans.insert(temp);
		}
	}

	for (set<string>::iterator it = ans.begin(); it != ans.end(); it++){
		cout<<*it<<endl;
	}

	return 0;
}*/