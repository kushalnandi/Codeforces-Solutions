/*
Vanya walks late at night along a straight street of length l, lit by n lanterns. Consider the coordinate system with the beginning of the street corresponding to the point 0, and its end corresponding to the point l. Then the i-th lantern is at the point ai. The lantern lights all points of the street that are at the distance of at most d from it, where d is some positive number, common for all lanterns.

Vanya wonders: what is the minimum light radius d should the lanterns have to light the whole street?

Input
The first line contains two integers n, l (1 ≤ n ≤ 1000, 1 ≤ l ≤ 109) — the number of lanterns and the length of the street respectively.

The next line contains n integers ai (0 ≤ ai ≤ l). Multiple lanterns can be located at the same point. The lanterns may be located at the ends of the street.

Output
Print the minimum light radius d, needed to light the whole street. The answer will be considered correct if its absolute or relative error doesn't exceed 10 - 9.
*/

#include<bits/stdc++.h>
using namespace std;

int n , l;

long double min_radius(vector<int>& arr)
{
    sort(arr.begin() , arr.end());

    long double max_dist = 0.0L;

    for (int i = 1; i < n; i++)
    {
        max_dist = max(max_dist , (long double)(arr[i] - arr[i - 1]) / 2.0L);
    }
    
    if (arr[0] - 0 > max_dist)
    {
        max_dist = (long double)(arr[0] - 0); 
    }
    if (l - arr[n - 1] > max_dist)
    {
        max_dist = (long double)(l - arr[n - 1]);
    }
    return max_dist;
}

int main()
{
    cin >> n >> l;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    long double ans = min_radius(arr);
    cout << fixed << setprecision(10) << ans;

    return 0;
}