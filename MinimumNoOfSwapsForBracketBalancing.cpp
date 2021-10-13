int minimumNumberOfSwaps(string s){
        int close=0;
        int open=0;
        int ub=0;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='[')
            {
                open++;
                if(ub>0)
                {
                    ans+=ub;
                    ub--;
                }
            }
            else if(s[i]==']')
            {
                close++;
                ub=close-open;
            }
        }
        return ans;
    }
