long long int  countPS(string str)
    {
       long long n=str.length();
       long long int dp[n][n]={0};
       long long int mod=1e9+7;
       for(long long gap=0;gap<n;gap++)
       {
           for(long long i=0,j=gap;j<n;j++,i++)
           {
               if(gap==0)
               {
                   dp[i][j]=1;
               }
               else if(gap==1)
               {
                   dp[i][j]=(str[i]==str[j]?3:2);
               }
               else
               {
                   if(str[i]==str[j])
                   {
                       dp[i][j]=(dp[i][j-1]+dp[i+1][j]+1);
                   }
                   else
                   {
                       dp[i][j]=((dp[i][j-1]+dp[i+1][j])-dp[i+1][j-1]);
                   }
               }
                dp[i][j]+=mod;
                dp[i][j]%=mod;
           }
       }
        
       long long ans=dp[0][n-1];
       return ans;
    }
