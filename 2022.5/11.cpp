#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
struct tree{
    int num,times,siz;
    struct tree *left,*right;
}root;
void insert (tree *p,int n)
{   
    if(n>p->num)  
    {
        if(p->right==nullptr)
        {
            tree *x=new tree;
            x->num=n;
            x->times=1;
            p->right=x;
        }
        else insert(p->right,n);
    }
    if(p->num==n) {p->times++;p->siz++;}
    if(n<p->num)
    {
        if(p->left==nullptr)
        {
            tree *x=new tree;
            x->num=n;
            x->times=1;
            p->left=x;
        }
        else insert(p->left,n);
    }
}
int main()
{
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    root.times=1;
    if(a==5)root.num=b;
    for(int j=2;j<=n;j++)
    {
        int a,b,i;
        cin>>a>>b;
        if(a==5) 
        {
            insert(&root, b);
        }
        if(a==1)
        {
        }
        if(a==2)
        {
        }
        if(a==3)
        {
        }
        if(a==4)
        {
        }
    }
}