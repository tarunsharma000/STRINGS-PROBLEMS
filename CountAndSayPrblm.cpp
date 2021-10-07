#include<bits/stdc++.h>
using namespace std;
void print(string s)
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }
}
void CountAndSay(int n)
{
    if(n==1)
    {
        cout<<"1";
        return;
    }
    if(n==2)
    {
        cout<<"11";
        return;
    }
    string s="11";
    int cnt=1;
    for(int i=3;i<=n;i++)
    {
        s=s+'&';
        string temp="";
        for(int j=1;j<s.length();j++)
        {
            if(s[j]==s[j-1]) cnt++;
            else
            {
                temp=temp+to_string(cnt);
                temp+=s[j-1];
                cnt=1;
            }
        }
        s=temp;
    }
    print(s);
}
int main()
{
    int n;
    cin>>n;
    CountAndSay(n);
    return 0;
}
