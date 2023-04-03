#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n, maxi, lastIn;
    string ligths;
    char current;
    cin>>t;
    while(t--)
    {
        maxi=-1;
        lastIn=0;
        cin>>n>>current>>ligths;
        ligths += ligths;
        //cout<<ligths;
        for(int i=(n*2)-1; i>=0; i--)
        {
            if(ligths[i]=='g')
                lastIn=i;
            if(ligths[i]==current)
                maxi = max(lastIn-i, maxi);
        }
        cout<<maxi<<endl;
    }
}