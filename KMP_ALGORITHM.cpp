#include<bits/stdc++.h>
using namespace std;
void computelps(string pat,vector<int> &lps)
{
    int M=pat.length();
    int i,j;
    for(i=0;i<M;i++)
    {
        j=lps[i-1];
        while(j>0 and pat[i]!=pat[j])
        {
            j=lps[j-1];
        }
        if(pat[i]==pat[j])
        {
            j++;
        }
        pat[i]=j;
    }
}
void KMP(string text,string pat)
{
    int N=text.length();
    int M=pat.length();
    vector<int> lps(M,0);
    computelps(pat,lps);
    int i=0; int j=0;
    while(i<N)
    {
        if(text[i]==pat[j])
        {
            i++; j++;
        }
        if(j==M)
        {
            cout<<"Pattern Found at INDEX"<<" "<<i-j;
            j=lps[j-1];
        }
        else if(i<N and text[i]!=pat[j])
        {
            if(j!=0)
            {
                j=lps[j-1];
            }
            else
            {
              i=i+1;
            }
            
        }
    }
}
int main()
{
    string text;
    cin>>text;
    string pat;
    cin>>pat;
    KMP(text,pat);
    return 0;
}
