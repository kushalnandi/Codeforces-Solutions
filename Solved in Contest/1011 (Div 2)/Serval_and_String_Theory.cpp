//                                          QUESTION

// We’re allowed to do at most k swaps of any two characters, need to check if it's possible to make the string universal.

// Just check the char from the last is Greater or not.. No need to go further as 910 > 899.

#include<bits/stdc++.h>
using namespace std;

int n;

bool check(string& str)
{
    for(int i = 0 ; i < n / 2 ; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return str[i] < str[n - i - 1];
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> n >> k;

        string str;
        cin >> str;

        
        string rev = str;
        reverse(rev.begin() , rev.end());

        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        
        bool same = true;
        for (int i = 0; i < n; i++)
        {
            if (str[i] != str[0])
            {
                same = false;
                break;
            }            
        }
        
        if (same)
        {
            cout << "NO" << endl;
            continue;
        }        

        if (str < rev)
        {
            cout << "YES" << endl;
            continue;
        }
        
        
        if (check(str))
        {
            cout << "YES" << endl;
            continue;
        }
        

        if (k >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }     
    }
    return 0;
}