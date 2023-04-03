#include <iostream>

using namespace std;

int main()
{
    int n, m, aux, cont=1; 
    long long sum=0;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        cin>>aux;
        if(aux>cont)
        {
            sum+=aux-cont;
        }
        else if(aux<cont)
        {
            sum+=(n-cont) + aux;
        }
        cont=aux;
    }
    cout<<sum;
}