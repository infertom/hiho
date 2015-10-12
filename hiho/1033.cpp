//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//typedef long long ll;
//class Node{
//public:
//	ll sum, n;
//
//	Node();
//	Node(ll sum, ll n);
//
//	virtual Node operator+(const Node &node) const;
//	virtual bool operator~() const;
//};
//
//Node::Node():sum(-1),n(-1)
//{
//
//}
//
//Node::Node(ll sum, ll n)
//{
//	this->sum = sum;
//	this->n = n;
//}
//
//Node Node::operator+(const Node &node) const
//{
//	Node t;
//	t.sum = this->sum + node.sum;
//	t.n = this->n + node.n;
//
//	return t;
//}
//
//bool Node::operator~() const
//{
//	return (sum != -1 && n != -1);
//}
//
//
//Node f[20][1000];
//int num[20], k;
//
//Node dfs(int pos, int sum, bool flag1, bool flag2, bool flag3)
//{
//	if ( sum < 0 ) return Node(0, 0);
//	if ( !pos ) return (sum)? Node(0,0):Node(0,1);
//	if ( !flag1 && ~f[pos][sum] ) return f[pos][sum];
//
//	int sig = (flag1)? num[pos]:9;
//
//}
//
//ll getAns(int x)
//{
//	int len = 0;
//	while ( x ) num[++len] = x % 10, x /= 10;
//
//	Node temp = dfs();
//	return temp.sum;
//}
//
//int main()
//{
//	memset(f, -1, sizeof f);
//	ll l, r;
//	while ( cin>>l>>r>>k )
//	cout<<(getAns(r) - getAns(l-1))<<endl;
//
//	return 0;
//}