#include<bits/stdc++.h>
using namespace std;
char nums[][5]
        = { "", "", "ABC", "DEF", "GHI",
            "JKL", "MNO", "PQRS", "TUV",
            "WXYZ" };
void Keypad(string str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='.')
        {
            cout<<" ";
            i++;
            continue;
        }
        int count=0;
        while(str[i+1] and str[i]==str[i+1])
        {
            if(count==2 and ((str[i]>='2' and str[i]<='6') || str[i]=='8'))
            {
                break;
            }
            if(count==3 and (str[i]=='7' or str[i]=='9'))
            {
                break;
            }
            i++;
            count++;
            if(str[i]=='\0')
            {
                break;
            }
        }
        if(str[i]=='7' or str[i]=='9')
        {
            cout<<nums[str[i]-48][count%4];
        }
        else
        {
            cout<<nums[str[i]-48][count%3];
        }
        i++;
    }
}
int main()
{
    string phone;
    cin>>phone;
    Keypad(phone);
    return 0;
}
