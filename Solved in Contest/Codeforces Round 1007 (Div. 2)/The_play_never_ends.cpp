
#include<bits/stdc++.h>
using namespace std;

# define int long long

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        if ((k - 1) % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;     
        }           
        

        // int temp = 1;
        // bool flag = false;
        // while (temp <= k)
        // {
        //     if (temp == k)
        //     {
        //         flag = true;
        //         break;
        //     }
        //     temp += 3;            
        // }
        // if (flag)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;     
        // }           
    }
    return 0;
}