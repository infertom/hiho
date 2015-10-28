/*
const int MAXV=1010;
int uN,vN;//u,v数目
int g[MAXV][MAXV];
int linker[MAXV];
bool used[MAXV];
bool dfs(int u)//从左边开始找增广路径
{
	for(int v = 0; v < vN; v++)//这个顶点编号从0开始，若要从1开始需要修改
		if( g[u][v] && !used[v] )
		{
			used[v]=true;
			if( linker[v]==-1 || dfs(linker[v]) )
			{//找增广路，反向
				linker[v] = u;
				linker[u] = v;
				return true;
			}
		}
		return false;//这个不要忘了，经常忘记这句
}

int hungarian()
{
	int res=0;
	memset(linker, -1, sizeof(linker));
	for(int u = 0; u < uN; u++)
	{
		if ( ~linker[u] ) continue;
		memset(used, 0, sizeof(used));
		if( dfs(u) ) res++;
	}
	return res;
}
*/
