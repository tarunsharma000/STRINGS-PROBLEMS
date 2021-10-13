class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int k=1;
        string ans="";
        bool flag=true;
        if(strs.size()==1)
        {
            return strs[0];
        }
        for(int k=1;k<=200;k++)
        {
        for(int j=0;j<strs.size()-1;j++)
        {
            if(k>strs[j].length())
            {
                ans+=strs[0].substr(0,k-1);
                return ans;
            }
            if(strs[j].substr(0,k)!=strs[j+1].substr(0,k))
            {
                flag=false;
                break;
            }
        }
            if(!flag)
            {
                ans+=strs[0].substr(0,k-1);
                break;
            }
        }
        return ans;
    }
};
