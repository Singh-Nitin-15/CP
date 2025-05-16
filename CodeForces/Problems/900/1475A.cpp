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
    ll n;
    cin >> n;
    if((n&(n-1))==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

    /* For any number that is a power of 2 (e.g., 8 = 1000), 
    subtracting 1 causes a flip of all the 1 bits to the right
     of the most significant 1 in n (the highest bit set to 1).

So for n = 8 (1000), subtracting 1 gives 7 (0111), 
and when we AND these, we get 0

  n = 8   →   1000
   n - 1 = 7 →   0111
-----------------------
n & (n-1)   →   0000
   */ 
    return;
}