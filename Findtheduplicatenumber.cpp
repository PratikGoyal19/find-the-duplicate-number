#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int dp[b[n - 1] + 1];
    memset(dp, 0, sizeof(dp));
    for (i = 0; i < n; i++)
    {
        dp[a[i]]++;
        if (dp[a[i]] > 1)
        {
            cout << a[i];
            break;
        }
    }
    return 0;
}