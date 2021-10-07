#include<bits/stdc++.h>
using namespace std;
int CountStringEqual(string s)
{
    int cnt0=0;
    int cnt1=0;
    int totalcnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            cnt0++;
        }
        else if(s[i]=='1')
        {
            cnt1++;
        }
        if(cnt0==cnt1)
        {
            totalcnt++;
            cnt0=0;
            cnt1=0;
        }
    }
    return totalcnt;
}
int main()
{
    string s;
    cin>>s;
    int l=0;
    int r=s.length()-1;
    cout<<CountStringEqual(s);
    return 0;
}
