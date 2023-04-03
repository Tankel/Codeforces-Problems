#include<iostream>
#include<vector>

using namespace std;

char s[510][510];
int main()
{

    int i, j, k;
    int n, m, d;

    cin>>n>>m;

    for(i=1; i<510; i++)
    {
        for(j=1; j<510; j++)
            s[i][j]='.';
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>s[i][j];
            if(s[i][j]=='.')
                s[i][j]='D';
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(s[i][j]=='S' && (s[i][j+1]=='W' || s[i][j-1]=='W' || s[i+1][j]=='W' || s[i-1][j]=='W'))
            {
                //cout<<i<<" "<<j;nl
                printf("No\n");
                return 0;
            }
        }
    }

    cout<<"Yes\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            cout<<s[i][j];
        cout<<endl;
    }

}