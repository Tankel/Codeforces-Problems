#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, sum=0;
    bool flag;
    long long aux;
    cin>>t;
    while(t--)
    {
        flag = true;
        cin>>n;
        vector<long long>a;
        for(int i=0; i<n; i++)
        {
            cin>>aux;
            a.push_back(aux);
        }
        sort(a.begin(), a.end());
        if(n==1)
        {
            if(a[0]>1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
        {
            if(a[n-1]-1>a[n-2])
                cout<<"NO"<<endl;
            else 
                cout<<"YES"<<endl;
        }
    }
}