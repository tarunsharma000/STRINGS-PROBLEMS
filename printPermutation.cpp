#include<bits/stdc++.h>
using namespace std;
void print(string s)
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}
void PrintAllPermutation(string s,int l,int r)
{
    if(l==r)
    {
        print(s);
        return;
    }
    for(int i=l;i<=r;i++)
    {
        if(i!=l and s[i]==s[l]) continue;
         swap(s[l],s[i]);
         PrintAllPermutation(s,l+1,r);
         swap(s[l],s[i]);
    }
}
int main()
{
    string s;
    cin>>s;
    int l=0;
    int r=s.length()-1;
    PrintAllPermutation(s,l,r);
    return 0;
}
