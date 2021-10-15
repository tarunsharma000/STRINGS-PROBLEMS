#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int left=0;
    int right=s.length()-1;
    while(left<right)
    {
        if(s[left]!=s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    int flag=0;
    int cnt=0;
    while(s.length()>0)
    {
        if(isPalindrome(s))
        {
            flag=1;
            break;
        }
        else
        {
            cnt++;
            s.erase(s.begin()+s.length()-1);
        }
    }
    if(flag)
    {
        cout<<cnt;
    }
    return 0;
}
