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
  inputArray(v,n);
  if(n%2==0){
    cout<<2<<endl;
    cout<<1<<" "<<n<<endl;
    cout<<1<<" "<<n<<endl;
  }else{
    cout<<4<<endl;
    cout<<1<<" "<<n-1<<endl;
    cout<<1<<" "<<n-1<<endl;
    cout<<n-1<<" "<<n<<endl;
    cout<<n-1<<" "<<n<<endl;

  }
  return;
}