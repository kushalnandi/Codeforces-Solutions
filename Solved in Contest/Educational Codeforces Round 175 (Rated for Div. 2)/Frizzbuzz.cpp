
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ans = (n / 15) * 3;

        int rem = n % 15;

        if(rem >= 2)
        {
            ans += 3;
        }
        else if (rem >= 1)
        {
            ans += 2;
        }
        else
        {
            ans += 1;
        }
        
        // for (int i = 0; i <= n; i++)
        // {
        //     if ((i % 3) == (i % 5))
        //     {
        //         ans++;
        //     }            
        // }
        cout << ans << endl;
    }
    return 0;
}