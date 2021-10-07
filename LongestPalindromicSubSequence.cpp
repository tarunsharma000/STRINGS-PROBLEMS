#include<bits/stdc++.h>
using namespace std;
void print(string temp)
{
    for(int i=0;i<temp.length();i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}
void LongestPalindromicSub(string s)
{
    int n=s.length();
    int l,h;
    int st=0;
    int end=1;
    string temp=s.substr(st,end);
    for(int i=1;i<n;i++)
    {
         l=i-1;
         h=i;
        while(l>=0 && h<n && s[l]==s[h])
        {
            if(h-l+1>end)
            {
                st=l;
                end=h-l+1;
            }
            l--;
            h++;
        }
        l=i-1;
        h=i+1;
         while(l>=0 && h<n && s[l]==s[h])
        {
            if(h-l+1>end)
            {
                st=l;
                end=h-l+1;
            }
            l--;
            h++;
        }
    }
    temp=s.substr(st,end);
    print(temp);
}
int main()
{
    string s;
    cin>>s;
    LongestPalindromicSub(s);
    return 0;
}
