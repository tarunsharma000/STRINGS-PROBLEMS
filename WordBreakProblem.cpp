#include<bits/stdc++.h>
using namespace std;
void wordBreak(string A,string ans,vector<string> &B)
{
    if(A.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<A.length();i++)
    {
        string left=A.substr(0,i+1);
        for(int j=0;j<B.size();j++)
        {
            if(B[j].compare(left)==0)
            {
                string right=A.substr(i+1);
                wordBreak(right,ans+left+" ",B);
                break;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<string> B;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        B.push_back(s);
    }
    string A;
    cin>>A;
    wordBreak(A,"",B);
    return 0;
}
