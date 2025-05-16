#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vec vector<int> 

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
  int n,k;
  cin>>n>>k;
  vec v(n);
  int freq2 = 0;
  int freq3 = 0;
  int freq4 = 0;
  int freq5 = 0;
  bool flag3 = false;
  for(int i = 0; i<n; i++){
    cin>>v[i];
    if(v[i]%2==0) freq2++;
    if(v[i]%3==0) freq3++;
    if(v[i]%4==0) freq4++;
    if(v[i]%5==0) freq5++;
    if((v[i]+1)%3==0) flag3 = true;
  }
  // 1st case
  if(k==2){
    if(freq2!=0) cout<<0<<endl;
    else cout<<1<<endl;
  }
  // 2nd case
  if(k==3){
    if(freq3!=0) cout<<0<<endl;
    else{
        if(flag3) cout<<1<<endl;
        else cout<<2<<endl;
    }
  }
  // 3rd case
  if(k==4){
    if(freq4!=0) cout<<0<<endl;
    else{
    if(freq2 == 2) cout<<0<<endl;
    else if(freq2 == 1) cout<<1<<endl;
    else cout<<2<<endl;
    }
  }
  // 4th case
  if(k==5){
    if(freq5!=0) cout<<0<<endl;
    else{
        int small = INT_MAX;
        for(int i = 0; i<n; i++){
            int diff = 0;
            if(v[i]>5){
                 diff = 10-v[i];
            }
            if(v[i]<5){
                diff = 5-v[i];
            } 

            small = min(diff,small);
        }
        cout<<small<<endl;
    }
  }
  return;  
}