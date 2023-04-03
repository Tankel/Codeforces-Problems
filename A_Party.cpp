#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}

int bfs(int u, int n, vector<int> adj[])
{
    //  mark all distance with -1
    int dis[2000];
    memset(dis, -1, sizeof(dis));
    queue<int> q;
    q.push(u);
    //  distance of u from u will be 0
    dis[u] = 0;

    while (!q.empty())
    {
        int t = q.front();
        //cout<<"t: "<<t<<endl;
        q.pop();
 
        //  loop for all adjacent nodes of node-t
        for (auto it = adj[t].begin(); it != adj[t].end(); it++)
        {
            int v = *it;
            //cout<<"v: "<<v<<endl;
            // push node into queue only if
            // it is not visited already
            if (dis[v] == -1)
            {
                q.push(v);
 
                // make distance of v, one more
                // than distance of t
                dis[v] = dis[t] + 1;
                //cout<<"dis["<<v<<"]: "<<dis[v]<<endl;
            }
        }
    }

    return *max_element(dis , dis + n);
}

int main()
{
    int V = 2000;
    int n,aux, maxi=0;
    vector<int> adj[V];
    vector<int> roots;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>aux;
        if(aux!=-1)
            addEdge(adj, i, aux-1);
        else
            roots.push_back(i);
    }
    maxi = bfs(roots[0], n, adj); 
    for (int i=1; i<roots.size(); i++)
    {
        maxi = max(maxi, bfs(roots[i], n, adj)); 
    }
    cout<<maxi+1;
}