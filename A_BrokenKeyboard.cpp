#include <iostream>

using namespace std;

int main()
{
    int t, n;
    char s1, s2;
    string s;
    bool flag, yes;
    cin>>t;
    while(t--)
    {
        flag = true;
        yes = true;
        cin>>n;
        cin>>s;
        if(n-2%3==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(!flag)
                {
                    if(s[i]!=s[i+1])
                    {
                        cout<<"NO"<<endl;
                        yes = false;
                        break;
                    }
                    i++;
                }
                flag=!flag;
            }
            if(yes)
            {
                cout<<"YES"<<endl;
            }
        }
    }

}