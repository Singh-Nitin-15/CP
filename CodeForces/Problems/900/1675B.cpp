#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vec vector<int> v

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
  vec(n);
  inputArray(v,n);
  int i = n-1;
  int cnt = 0;
  int freq = 0;
  while(i>0){
    if(v[i-1] == 0){
        if(freq>1){
            cout<<-1<<endl;
            return;
        }
        freq++;
    }
    if(v[i]<=v[i-1]){
        v[i-1] /= 2;
        cnt++;
    }
    if(v[i]>v[i-1]){
        i--;
    }
  }
  cout<<cnt<<endl;
  return;
}