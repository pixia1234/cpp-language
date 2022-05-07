#include<bits/stdc++.h>
using namespace std;
struct tree{
    int left;
    int right;
}tree[1000010];
int maxdepth (int a)    
{
    if(tree[a].left||tree[a].right) return (max(maxdepth(tree[a].left),maxdepth(tree[a].right))+1);
    else return 1;
}
int main(){
    int n;
    cin>>n;
    tree[0].left=0;tree[0].right=0;
    for(int i=1;i<=n;i++) 
    {
        cin>>tree[i].left>>tree[i].right;
    }
    cout<<maxdepth(1)<<endl;
}