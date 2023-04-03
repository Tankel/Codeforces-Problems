#include <iostream>

using namespace std;

int main()
{
    int n, a1,a2, b1, b2, c1, c2;
    cin>>n>>b1>>b2>>a1>>a2>>c1>>c2;

    if((a1 < b1 && b1 < c1) || (c1 < b1 && b1 < a1) || (a2 < b2 && b2 < c2) || (c2 < b2 && b2 < a2))
        cout<<"NO";
    else
        cout<<"YES";
}