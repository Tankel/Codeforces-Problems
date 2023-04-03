#include <iostream>

using namespace std;

int main()
{
    int n, a[100], sum=0, r=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for (int i=1; i<=5; i++)
    {
        if((sum+i)%(n+1)!=1)
            r++;
    }
    cout<<r;
}