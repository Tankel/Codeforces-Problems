#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, aux;
    cin>>n;
    vector<int>adj;
    for(int i=0; i<n; i++)
    {
        cin>>aux;
        adj.push_back(aux-1);
    }
    for(int i=0 ; i<n; i++)
    {
        if(adj[adj[adj[i]]] == i)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}