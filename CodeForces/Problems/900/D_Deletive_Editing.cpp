#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vec vector<int> v

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
    string s, t;
    cin >> s >> t;

    unordered_map<char, int> freq;
    for (char c : t)
    {
        freq[c]++;
    }
    int n = s.size();
    int m = t.size();
    string ans = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if (freq[s[i]])
        {
            ans += s[i];
            freq[s[i]]--;
        }
    }
    reverse(ans.begin(), ans.end());

    if (ans == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return;
}
