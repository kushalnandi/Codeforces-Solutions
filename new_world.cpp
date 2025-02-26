#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n , k , p;
    cin >> n >> k >> p;

    vector<int> arr(n , 0);
    
    int min_op = abs(k) / p;
    
    if (min_op * p != abs(k))
    {
        min_op++;
    }
    
    if (min_op > n)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << min_op << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();        
    }
    return 0;
}