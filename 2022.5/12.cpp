#include<bits/stdc++.h>
using namespace std;
struct tree{
    int value,lson,rson;
}tree[1000];
int count(int index,int n)
{
    if(tree[index].value==0) return 0;
    if(n==0) return tree[index].value+count(tree[index].lson,0)+count(tree[index].rson,0);
    return n*tree[index].value+count(tree[index].lson, n+1)+count(tree[index].rson, n+1);
}
long long int ans;
int main()
{
    int n;
    cin>>n;
    for(int i=1 ;i<=n;i++) cin>>tree[i].value>>tree[i].lson>>tree[i].rson;
    int r=1,a,b,temp=0;
    ans=count(tree[r].lson,1)+count(tree[r].rson,1);
    while(true){
        a=count(tree[r].lson,0),b=count(tree[r].rson,0);
        temp+=tree[r].value;
        //cout<<a<<b<<temp<<endl;
        if(b-a>temp) {r=tree[r].rson;ans-=b-a-temp;temp+=a;}
        else if(a-b>temp) {r=tree[r].lson;ans-=a-b-temp;temp+=b;}
        else {cout<<ans<<endl;return 0;}
    }
}