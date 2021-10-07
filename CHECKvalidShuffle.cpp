#include<bits/stdc++.h>
using namespace std;
bool  ValidShuffle(string s1,string s2,string s3)
{
    int n1=s1.length();
    int n2=s2.length();
    int n3=s3.length();
    if(n1+n2!=n3)
    {
        return false;
    }
    string s4=s1+s2;
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
    if(s3!=s4)
    {
        return false;
    }
    return true;
}
int main()
{
    string s1;
    string s2;
    string s3;
    cin>>s1>>s2>>s3;
    cout<< ValidShuffle(s1,s2,s3);
    return 0;
}
