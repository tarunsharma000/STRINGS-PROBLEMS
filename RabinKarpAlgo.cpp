#include<bits/stdc++.h>
using namespace std;
# define d 256
void RabinKarp(string text,string pat)
{
    int n=text.length();
    int m=pat.length();
    int t=0;
    int p=0;
    int h=1;
    int q=101;
    int i,j;
    for(int i=0;i<m-1;i++)
    {
        h=(h*d)%q;
    }
    for(i=0;i<m;i++)
    {
        t=(d*t+text[i])%q;
        p=(d*p+pat[i])%q;
    }
    for(int i=0;i<=n-m;i++)
    {
        if(p==t)
        {
            for(j=0;j<m;j++)
            {
                if(text[i+j]!=pat[j]) break;
            }
             if(j==m)
         {
           cout<<"Pattern found at Index"<<" "<<i<<endl;
        }
        }
    if(i<n-m)
    {
        t=(d*(t-text[i]*h)+text[i+m])%q;
    }
    if(t<0)
    {
        t=t+q;
    }
    }
}
int main()
{
    string text;
    cin>>text;
    string pat;
    cin>>pat;
    RabinKarp(text,pat);
    return 0;
}
