#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    rep(i,0,n) cin >> a[i];
    sort(all(a));

    int ans = INT_MAX;
    int i = 0;
    ans = min(ans, 0 + n);

    while(i < n){
/*  int h = a[i];          // h is the amount of damage you're "trying"
    int cnt = n - j;       // cnt = number of monsters with HP > h
    ans = min(ans, h + cnt);  // total time = h (damage seconds) + cnt (manual kills)*/
        int h = a[i];
        int j = i;
        while(j < n && a[j] == h) j++;
        int cnt = n - j;
        ans = min(ans, h + cnt);
        i = j;
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
