#include<bits/stdc++.h>
using namespace std;
void wordBreak(string A,vector<string> &B)
{
    int len=A.length();
    vector<int> dp(len);
    unordered_set<string> st;
    for(int i=0;i<B.size();i++)
    {
        st.insert(B[i]);
    }
    for(int i=0;i<dp.size();i++)
    {
        int k=i+1;
        for(int j=0;j<=i;j++)
        {
    
            string temp= A.substr(j,k);
            
            if(st.find(temp)!=st.end())
            {
                if(j>0)
                {
                  dp[i]=dp[i]+dp[j-1];
                }
                else
                {
                    dp[i]=dp[i]+1;
                }
            }k--;
        }
    }
    cout<<dp[dp.size()-1];
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
    wordBreak(A,B);
    return 0;
}
