#include <iostream>
#include <string>

using namespace std;

string substr[] = {"00","50","25","75"};
int INF = 100;

int solve(string s, string e)
{
    int i = s.length();
    int res = 0;
    while(s[i]!=e[1] && i>0)
    {
        i--; 
        res++;
    }
    i--;
    while(s[i]!=e[0] && i>0)
    {
        i--; 
        res++;    
    }
    res--;
    return res;
}

int main()
{
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        int cont=INF;
        cin>>s;
        for(auto e: substr)
        {
            cont = min(cont, solve(s, e));
        }
        cout<<cont<<endl;
    }
}