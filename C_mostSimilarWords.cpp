#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    int sum, t, n, m;
    cin>>t;
    while(t--)
    {
        vector<string>words;
        vector<int>min;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            words.push_back(s);
        }
        for(int i=0; i<n-1; i++)
        {
            for(int k=i+1; k<n; k++)
            {
                sum=0;
                for(int j=0; j<m; j++)
                {
                    sum+=abs(words[i][j]-words[k][j]);
                }
                min.push_back(abs(sum));
                //cout<<words[i]<<" "<<words[k]<<" "<<abs(sum)<<endl;
                //cout<<sum<<endl;
            }
        }
        cout<<*min_element(min.begin(), min.end())<<endl;
    }
}