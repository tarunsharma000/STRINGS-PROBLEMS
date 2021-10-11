#include<bits/stdc++.h>
using namespace std;
void Keypad(string str[],string input)
{
    string output="";
    for(int i=0;i<input.length();i++)
    {
        if(input[i]==' ')
        {
            output+='0';
        }
        output=output+str[input[i]-'a'];
    }
    cout<<output<<" ";
}
int main()
{
    string str[]={"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };
    string input={"input"};
    Keypad(str,input);
    return 0;
}
