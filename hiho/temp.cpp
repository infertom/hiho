/*
const int MAXV=1010;
int uN,vN;//u,v��Ŀ
int g[MAXV][MAXV];
int linker[MAXV];
bool used[MAXV];
bool dfs(int u)//����߿�ʼ������·��
{
	for(int v = 0; v < vN; v++)//��������Ŵ�0��ʼ����Ҫ��1��ʼ��Ҫ�޸�
		if( g[u][v] && !used[v] )
		{
			used[v]=true;
			if( linker[v]==-1 || dfs(linker[v]) )
			{//������·������
				linker[v] = u;
				linker[u] = v;
				return true;
			}
		}
		return false;//�����Ҫ���ˣ������������
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
