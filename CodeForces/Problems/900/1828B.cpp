#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) (x).begin(),(x).end()

void solve();
void read(vector<int> &v,int n){
    for (auto& i : v) {
        cin >> i;
    }
}
static int GCD(int x, int y){
    while(y != 0){
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
        int n;
        cin>>n;
        vector<int> v(n);
        read(v,n);
        vector<int> vec;
        unordered_set<int> set;
        for(int i = 0; i<n; i++){
            int diff = abs(v[i]-(i+1));
            if(diff!=0) set.insert(diff);
        }
        if(set.size() == 0){
            cout<<0<<endl;
            return;
        }
        int mini = 0;
        for(int x: set){
            mini = GCD(x,mini);
        }
        cout<<mini<<endl;
    return;
}