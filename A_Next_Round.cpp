#include <iostream>

using namespace std;

int main()
{
    int n,k,aux,cont=0;
    cin>>n>>k;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>aux;
        arr[i]=aux;
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>=arr[k-1] &&arr[i]!=0)
        {
            cont++;
        }
    }
    cout<<cont;
}
