#include<bits/stdc++.h>
#define MAXN 10010
using namespace std;
int out;
int num[MAXN];
void init(int n)
{
    for(int i=1;i<=n;i++) num[i]=i;
}
int find(int n)
{
    if(num[n]==n) return n;
    else 
    {
        num[n]=find(num[n]);
        return num[n];
    }
}
void insert(int a,int b)
{
    int temp1=find(a),temp2=find(b);
    if(temp1==temp2) return;
    num[find(a)]=find(b);
    out--;
}
int main()
{
    while(true)
    {
        int n,m;
        cin>>n;
        if(n==0) return 0;
        cin>>m;
        init(n);
        out=n-1;
        for(int i=1;i<=m;i++)
        {
            int a,b;
            cin>>a>>b;
            insert(a,b);
        }
        cout<<out<<endl;
    }
}