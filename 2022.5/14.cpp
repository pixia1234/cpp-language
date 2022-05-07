#include<bits/stdc++.h>
using namespace std;
struct tree {
    int lson,rson;
}tree[30];
void shuchu(int n)
{
    if(n==0) return;
    cout<<char(n+'a'-1);
    shuchu(tree[n].lson);
    shuchu(tree[n].rson);
}
int main()
{
    int n,i,root;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        string a;
        cin>>a;
        if(i==1) root=int(a[0]-'a'+1);
        int tem=int(a[0]-'a'+1);
        tree[tem].lson= (a[1]=='*')?0:int(a[1]-'a'+1);
        tree[tem].rson= (a[2]=='*')?0:int(a[2]-'a'+1);
    }
    shuchu(root);
}