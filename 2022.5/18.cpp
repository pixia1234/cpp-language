#include<bits/stdc++.h>
using namespace std;
int num[200001][2];
int main()
{
    int n;
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++)
    {
        int a=getchar()-'A';
        int b=getchar()-'A';
        num[i][0]=26*a+b;
        while(getchar()!=' ');
        a=getchar()-'A';
        b=getchar()-'A';
        num[i][1]=26*a+b;
        getchar();
    }
    long long int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(num[i][0]==num[j][1] && num[i][1]==num[j][0]) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}