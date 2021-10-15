#include<bits/stdc++.h>
using namespace std;
vector<int> computeLps(string s,int n)
{
    vector<int> lps(n,0);
    for(int i=1;i<n;i++)
    {
        int j=lps[i-1];
        while(j>0 and s[i]!=s[j])
        {
            j=lps[j-1];
        }
        if(s[i]==s[j])
        {
            j++;
        }
        lps[i]=j;
    }
    return lps;
}
int main()
{
    string s;
    cin>>s;
    string str=s;
    reverse(s.begin(),s.end());
    s=str+"&"+s;
    int n=s.length();
    vector<int> lps=computeLps(s,n);
    int min_chracter=str.length()-lps[n-1];
    cout<<lps[n-1];
    cout<<min_chracter;
    return 0;
}
