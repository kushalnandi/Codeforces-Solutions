/*
🔹 Difficulty: 1100

After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday. We know that the i-th group consists of si friends (1 ≤ si ≤ 4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?

Input
The first line contains integer n (1 ≤ n ≤ 105) — the number of groups of schoolchildren. The second line contains a sequence of integers s1, s2, ..., sn (1 ≤ si ≤ 4). The integers are separated by a space, si is the number of children in the i-th group.

Output
Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.

*/


#include<bits/stdc++.h>
using namespace std;

int n;

int taxi(vector<int>& arr)
{
    int taxis = 0;

    taxis += arr[4]; // Group of 4 needs a separate taxi
    
    // including groups of 1 & 3
    taxis += arr[3];
    arr[1] = max(0, arr[1] - arr[3]);

    // merge groups of 2
    taxis += arr[2] / 2;

    // if a group of 2 is remaining then merge then with group of 1
    if (arr[2] % 2) 
    {
        taxis++;
        arr[1] = max(0, arr[1] - 2);
    }

    taxis += (arr[1] + 3) / 4; 
    
    return taxis;
}

int main()
{
    cin >> n;

    vector<int> arr(5 , 0);
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr[t]++;
    }
    int ans = taxi(arr);
    
    cout << ans;
    return 0;
}