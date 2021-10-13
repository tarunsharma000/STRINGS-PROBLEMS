int minFlips (string s)
{
    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<s.length();i++)
    {
        if((i%2==0 && s[i]=='1') || (i%2!=0 and s[i]=='0'))
        {
            cnt0++;
        }
        if((i%2!=0 && s[i]=='1') || (i%2==0 and s[i]=='0'))
        {
            cnt1++;
        }
    }
    return min(cnt0,cnt1);
}
