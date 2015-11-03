/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

class Node{
public:
	int x, y;
	Node();
	Node(int x, int y);
	~Node();
	bool operator==(Node a);
	Node operator+(Node a);
	bool operator<(const Node a) const;
};

Node::Node(){
	x = y = 0;
}

Node::~Node(){

}

Node::Node(int x, int y){
	this->x = x;
	this->y = y;
}

bool Node::operator==(Node a){
	if ( a.x == this->x && a.y == this->y ) return true;
	else return false;
}

Node Node::operator+(Node a){
	Node temp(this->x + a.x, this->y + a.y);
	return temp;
}

bool Node::operator<(const Node a) const{
	if ( this->x != a.x ) return this->x < a.x;
	else return this->y < a.y;
}

ll mDis(Node a, Node b)
{
	return (ll)(a.x - b.x) * (a.x - b.x) + (ll)(a.y - b.y) * (a.y - b.y);
}

const double EPS = 1e-8;
Node node[10];
int vis[10];
int num = 0;
int xxx, yyy;
map<Node, int> h;
bool matr[10][10];

int main()
{
	//freopen("in.txt", "r", stdin);

	int T;
	scanf("%d", &T);
	while ( T-- )
	{
		num = 0;
		memset(vis, 0, sizeof vis);
		memset(matr, 0, sizeof matr);
		h.clear();

		for (int i = 0; i < 4; i++){
			scanf("%d%d", &xxx, &yyy);
			Node temp1(xxx, yyy);
			scanf("%d%d", &xxx, &yyy);
			Node temp2(xxx, yyy);
			if ( h.find(temp1) == h.end() ) {
				h[temp1] = num;
				node[num++] = temp1;
			}
			if ( h.find(temp2) == h.end() ) {
				h[temp2] = num;
				node[num++] = temp2;
			}
			vis[h[temp1]]++;
			vis[h[temp2]]++;
			matr[h[temp1]][h[temp2]] = matr[h[temp2]][h[temp1]] = true;
		}

		/ *printf("%d\n", num);
		for (int i = 0; i < num; i++){
			printf("%d  %d\n", node[i].x, node[i].y);
		}* /
	
		if ( num != 4 || vis[0] != 2 || vis[1] != 2 || vis[2] != 2 || vis[3] != 2 ) {
			printf("NO\n");
			continue;
		}

		if ( node[0] + node[1] == node[2] + node[3] ){
			if ( mDis(node[0], node[1]) == mDis(node[2], node[3]) && !matr[0][1] ) printf("YES\n");
			else printf("NO\n");
		}else if ( node[0] + node[2] == node[1] + node[3] ){
			if ( mDis(node[0], node[2]) == mDis(node[1], node[3]) && !matr[0][2] ) printf("YES\n");
			else printf("NO\n");
		}else if ( node[0] + node[3] == node[2] + node[1] ){
			if ( mDis(node[0], node[3]) == mDis(node[2], node[1]) && !matr[0][3] ) printf("YES\n");
			else printf("NO\n");
		}else {
			printf("NO\n");
			continue;
		}
	}


	return 0;
}*/