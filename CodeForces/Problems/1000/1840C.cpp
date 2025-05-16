#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve();
void inputArray(vector<int> &v,int n){
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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

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
  int n,k,q;
  cin>>n>>k>>q;
  vector<int> v(n);
  inputArray(v,n);
  ll cnt = 0;
  for(int i = 0; i<n;){
    while(i<n && v[i]>q){
        i++;
    }
    ll cct = 0;
    while(i<n && v[i]<=q){
    cct++;
    i++;
    }
   if(cct>=k){
   ll perm = ((cct-k+1)*(cct-k+2))/2;
   cnt += perm;
   }
  }
  cout<<cnt<<endl;
  return;
}