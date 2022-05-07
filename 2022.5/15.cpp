#include<bits/stdc++.h>
using namespace std;
int tree[110][2];
int level[110],width[110],parant[110];
void findlevel(int n)
{
    if(n==0) return ;
    level[tree[n][0]]=level[n]+1;
    level[tree[n][1]]=level[n]+1;
    findlevel(tree[n][0]);
    findlevel(tree[n][1]);
}
int a,b;
int findparant(int n)
{
    if(n==0) return 0;
    int x=0;
    if(n==a||n==b) x=1;
    parant[n]=findparant(tree[n][0])+findparant(tree[n][1])+x;
    return parant[n];
}
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<n;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        if(tree[temp1][0]==0) tree[temp1][0]=temp2;
        else tree[temp1][1]=temp2;
    }
    int temp=0;
    cin>>a>>b;
    level[1]=1;
    findlevel(1);
    for(int i=1;i<=100;i++) {temp=max(temp,level[i]);width[level[i]]+=1; }
    cout<<temp<<endl;
    temp=0;
    for(int i=1;i<=100;i++) temp=max(temp,width[i]);
    cout<<temp<<endl;
    int x=1;
    findparant(1);
    while(1)
    {
        bool flag=false;
        if(tree[x][0] && parant[tree[x][0]]==2) {x=tree[x][0];flag=true;}
        if(tree[x][1] && parant[tree[x][1]]==2) {x=tree[x][1];flag=true;}
        if(!flag) break;
    }
    cout<<2*level[a]+level[b]-3*level[x]<<endl;
    return 0;
}