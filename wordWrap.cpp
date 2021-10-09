#include<bits/stdc++.h>
using namespace std;
void printSoln(int p[],int n)
{
    int k;
    if(p[n]==1)
    {
        k==1;
    }
    else
    {
        k=printSoln(p,p[n]-1)+1;
        cout<<from<<p[n]<<" "<<to<<" "<<n;
        return k;
    }
}
void Wordwrap(int nums[],int k,int n)
{
    int cost[n+1][n+1];
    int extras[n+1][n+1];
    int inf=INT_MAX;
    int c[n+1];
    int p[n+1];
    for (int i = 1; i <= n; i++)
    {
        extras[i][i] = k - nums[i-1];
        for (int j = i+1; j <= n; j++)
            extras[i][j] = extras[i][j-1] - nums[j-1] - 1;
    }
     for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (extras[i][j] < 0)
                cost[i][j] = inf;
            else if (j == n && extras[i][j] >= 0)
                cost[i][j] = 0;
            else
                cost[i][j] = extras[i][j]*extras[i][j];
        }
    }
    c[0]=0;
    for(int j=1;j<=n;j++)
    {
        c[j]=inf;
        for(int i=1;i<=j;i++)
        {
            if(c[i-1]!=inf and cost[i][j]!=inf and (c[i-1]+cost[i][j])<c[j])
            {
                c[j]=c[i-1]+cost[i][j];
                p[j]=i;
            }
        }
    }
    cout<<"TOTAL COST"<<c[n]<<endl;
    printSoln(p,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Wordwrap(arr,k,n);
    return 0;
}
