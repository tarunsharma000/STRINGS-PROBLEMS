#include<bits/stdc++.h>
using namespace std;
bool  CheckRotation(string s1,string s2)
{
    int n1=s1.length();
    int n2=s2.length();
    if(n1!=n2) return false;
    string s3=s1+s1;
    if(s3.find(s2) != -1)
    {
        return true;
    }
    return false;
}
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    cout<<CheckRotation(s1,s2);
    return 0;
}
