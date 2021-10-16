bool match(string wild, string pattern)
    {
        int len_wild=wild.length();
        int len_pat=pattern.length();
        bool dp[len_wild+1][len_pat+1];
        for(int i=len_wild;i>=0;i--)
        {
            for(int j=len_pat;j>=0;j--)
            {
                if(i==len_wild and j==len_pat)
                {
                    dp[i][j]=true;
                }
                else if(i==len_wild)
                {
                    dp[i][j]=false;
                }
                else if(j==len_pat)
                {
                    if(wild[i]=='*')
                    {
                        dp[i][j]=dp[i+1][j];
                    }
                    else
                    {
                        dp[i][j]=false;
                    }
                }
                else
                {
                    if(wild[i]=='?')
                    {
                        dp[i][j]=dp[i+1][j+1];
                    }
                    else if(wild[i]=='*')
                    {
                        dp[i][j]=dp[i+1][j] || dp[i][j+1];
                    }
                    else if(wild[i]==pattern[j])
                    {
                        dp[i][j]=dp[i+1][j+1];
                    }
                    else if(wild[i]!=pattern[j])
                    {
                        dp[i][j]=false;
                    }
                }
                
            }
        }
        return dp[0][0];
    }
