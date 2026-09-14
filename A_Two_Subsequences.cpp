#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int p = 0;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i] < s[p])
            {
                p = i;
            }   
        }
        for(int i=0; i<s.size(); i++)
        {
            if(i == p)
            {
                cout << s[i] << " ";
            } 
        }
        for(int i=0; i<s.size(); i++)
        {
            if(i != p)
            {
                cout << s[i];
            } 
        }
        cout << endl;
    }
    return 0;
}