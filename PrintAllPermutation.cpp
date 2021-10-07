#include<bits/stdc++.h>
using namespace std;
void PrintAllPermutation(string s)
{
    sort(s.begin(),s.end());
    vector<string> ans;
    do
    {
        ans.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"\n";
    }
}
int main()
{
    string s;
    cin>>s;
    PrintAllPermutation(s);
    return 0;
}
