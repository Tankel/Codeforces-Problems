#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int n;
    string s1="I love ", s2="I hate "; //, s="";
    stringstream s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
            s<<s2;
        else
            s<<s1;
        if(i==n-1)
            s<<"it ";
        else
            s<<"that ";
    }
    cout<<s.str();
}