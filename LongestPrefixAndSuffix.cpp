	int lps(string s) {
	    int len=s.length();
	    unordered_set<string> st;
	    int i=0;
	    int left=1;
	    while(left<len)
	    {
	        string str=s.substr(i,left);
	        left++;
	        st.insert(str);
	    }
	    int j=len-1;
	    int ans=0;
	    while(j>0)
	    {
	        string str2=s.substr(j);
	        if(st.find(str2)!=st.end())
	        {
	            int n=str2.length();
	            if(n>ans)
	            {
	                ans=n;
	            }
	        }
	        st.insert(str2);
	        j--;
	    }
	   return ans;
	}
