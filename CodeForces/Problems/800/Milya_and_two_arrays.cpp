#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a.at(i);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b.at(i);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int count = 1;
        int count2 = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                count++;
            }
            if (b[i] != b[i + 1])
            {
                count2++;
            }
        }
     if (count + count2 >= 4)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}