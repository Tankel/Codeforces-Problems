#include <iostream>

using namespace std;

int isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, i=1;
    cin>>n;
    while(true)
    {
        if(!isPrime((n*i)+1))
        {
            cout<<i;
            return 0;
        }
        i++;
    }
}