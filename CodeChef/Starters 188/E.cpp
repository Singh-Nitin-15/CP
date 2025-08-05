#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) (x).begin(),(x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void read(vector<int> &v,int n){
    for (auto& i : v) {
        cin >> i;
    }
}

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    read(a, n);
    read(b, n);

    vector<pair<int, int>> thieves(n);
    rep(i, 0, n){
        thieves[i] = {a[i], b[i]};
    }

    sort(all(thieves)); // sort by level

    vector<int> steal(n, 0);
    priority_queue<int, vector<int>, greater<int>> pq; // min-heap to keep top k largest values

    rep(i, 0, n){
        if (!pq.empty()){
            int sum = 0;
            // Use a copy to calculate sum
            priority_queue<int, vector<int>, greater<int>> temp = pq;
            while (!temp.empty()) {
                sum += temp.top();
                temp.pop();
            }
            steal[i] = sum;
        }
        pq.push(thieves[i].second);
        if ((int)pq.size() > k){
            pq.pop(); // keep only top k values
        }
    }

    // map level to answer
    map<int, int> level_to_ans;
    rep(i, 0, n){
        level_to_ans[thieves[i].first] = steal[i];
    }

    // output in original input order
    vector<int> res(n);
    rep(i, 0, n){
        res[i] = level_to_ans[a[i]];
    }

    for (int x : res) cout << x << " ";
    cout << endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
