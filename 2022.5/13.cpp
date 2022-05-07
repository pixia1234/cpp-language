#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0,i,j;
    string a,b;
    cin>>a>>b;
    for(i=0;i<a.length();i++)
    for(j=1;j<a.length();j++)
        if(a[i]==b[j]&&a[i+1]==b[j-1]) ans++;
    cout<<pow(2,ans)<<endl;
}