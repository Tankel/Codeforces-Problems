#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int n, s, aux, ida[1004], venida[1004];
    cin>>n>>s;
    s--;
    for(int i=0; i<n; i++)
        cin>>ida[i];
    for(int i=0; i<n; i++)
        cin>>venida[i];
    if(!ida[0])//ida[0]==0 si puede empezar el viaje
    { 
        cout<<"NO";
        return 0;
    }
    if(ida[s])//ida[s]==1 si se encuentra abierta la estacion de ida
    { 
        cout<<"YES";
        return 0;
    }
    else if(!venida[s])//venida[s]==0 si no se encuentra abierta ni de ida ni de venida
    {
        cout<<"NO";
        return 0;
    }
    //else si se encuentra abierta de venida
    int flag = 1;
    for(int i=s; i<n; i++) //solo nos importa desde s ya que es de venida
    {
        if(ida[i]&&venida[i])//ida[i]==1 && venida[i]==1
        {
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"NO";
    else
        cout<<"YES";

}