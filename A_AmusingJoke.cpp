#include <iostream>

using namespace std;

void contLetters(int letters[], string s)
{
    for(int i=0; i<s.length(); i++)
    {
        letters[int(s[i])-65]++;
        //cout<<i<<" "<<letters[i]<<endl; 
    }
}
void contLetters2(int letters[], string s)
{
    for(int i=0; i<s.length(); i++)
        letters[int(s[i])-65]--;
}
bool check(int letters[])
{
    for (int i=0; i<26; i++)
    {
        if(letters[i] != 0)
            return false;
    }
    return true;
}
int main()
{
    string a, b, c;
    int letters[26] = {0};
    cin>>a>>b>>c;
    contLetters(letters, a);
    contLetters(letters, b);
    contLetters2(letters, c);
    if(check(letters))
        cout<<"YES";
    else
        cout<<"NO";
}