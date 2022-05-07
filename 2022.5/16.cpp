#include<bits/stdc++.h>
#define MAXN 10010
using namespace std;
int num[MAXN];
void init(int n)
{
    for(int i=1;i<=n;i++) num[i]=i;
}
int find(int x)
{
    if(num[x]==x) return x;
    else{
        num[x]=find(num[x]);
        return num[x];
    }
}
void insert(int a,int b)
{
    num[find(b)]=find(a);
}
int main()
{
    int n,m,p;
    cin>>n>>m>>p;
    init(n);
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        insert(a,b);
    }
    for(int i=1;i<=p;i++)
    {
        int x,y;
        cin>>x>>y;
        if(find(x)==find(y)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}