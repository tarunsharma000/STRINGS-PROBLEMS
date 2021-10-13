#include<bits/stdc++.h>
using namespace std;
void BooyerPre(string pat,unordered_map<char,int> &mp)
{
    int n=pat.length();
    for(int i=0;i<pat.length();i++)
    {
        mp[pat[i]]=max(1,n-i-1);   
    }
}
void BooyerMooreAlgo(string text,string pat)
{
    unordered_map<char,int> mp;
    BooyerPre(pat,mp);
    int n=text.length();
    int m=pat.length();
    int no_skips;
    for(int i=0;i<=n-m;i+=no_skips)
    {
        no_skips=0;
        for(int j=m-1;j>=0;j--)
        {
            if(pat[j]!=text[i+j])
            {
                if(mp.find(text[i+j])!=mp.end())
                {
                    no_skips=mp[text[i+j]];
                    break;
                }
                else{
                    no_skips=m;
                }
            }
        }
        if(no_skips==0)
        {
            cout<<"PATTERN FOUND AT INDEX"<<" "<<i<<" "<<endl;
            no_skips=m;
        }
    }
}
int main()
{
    string text;
    getline(cin,text);
    string pat;
    cin>>pat;
    BooyerMooreAlgo(text,pat);
    return 0;
}
