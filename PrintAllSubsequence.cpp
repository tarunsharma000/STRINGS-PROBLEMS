#include<bits/stdc++.h>
using namespace std;
void PrintAllSubse(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<"\n";
        return;
    }
    PrintAllSubse(s.substr(1),ans+s[0]);
    PrintAllSubse(s.substr(1),ans);
}
int main()
{
    string s;
    cin>>s;
    PrintAllSubse(s,"");
    return 0;
}
