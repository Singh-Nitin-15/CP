#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()

void solve();
void read(vector<int> &v, int n)
{
    for (auto &i : v)
    {
        cin >> i;
    }
}
static int GCD(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    read(v, n);
    if (n == 1) {
    cout << 0 << "\n";
    return;
}

    int ans = v[n - 1] - v[0];
    ans = max(ans, v[n - 1] - *min_element(v.begin(), v.end() - 1));
    ans = max(ans, *max_element(v.begin() + 1, v.end()) - v[0]);

    int case3 = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        case3 = max(case3, v[i] - v[i + 1]);
    }

    cout << max(ans, case3) << endl;
}
