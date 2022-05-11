#include<bits/stdc++.h>
using namespace std;
int compare(string a,string b)
{
    if(a.length()>b.length()) return 1;
    if(a.length()<b.length()) return 0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]>b[i]) return 1;
        if(a[i]<b[i]) return 0;
    }
    return 1;
}
int main()
{
    int n;
    string max;
    int maxn=1;
    cin>>n;
    cin>>max;
    for(int i=1;i<n;i++)
    {
        string x;
        cin>>x;
        if(compare(x,max)) 
        {
            max=x;
            maxn=i+1;
        }
    }
    cout<<maxn<<endl<<max<<endl;
    return 0;
    
}