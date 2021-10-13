string secFrequent (string arr[], int n)
    {
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        unordered_map<string,int> :: iterator it;
           int max1=-100;
           int max2=-100;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>max1)
            {
                max1=it->second;
            }
        }
        string ans="";
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second!=max1 and it->second>max2)
            {
                ans=it->first;
                max2=it->second;
            }
        }
        return ans;
    }
