#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    string me, enemy;
    while(t--)
    {
        int cont=0;
        cin>>n>>enemy>>me;
        for(int i=0; i<n; i++)
        {
            if(me[i]=='1')
            {
                if (enemy[i]=='0')
                    cont++;
                else if(enemy[i-1]=='1')
                {
                    enemy[i-1]='0';
                    cont++;
                }
                else if(enemy[i+1]=='1')
                {
                    enemy[i+1]='0';
                    cont++;
                }
            }
        }
        cout<<cont<<endl;
    }
}