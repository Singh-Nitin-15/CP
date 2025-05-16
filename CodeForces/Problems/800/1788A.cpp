#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vec vector<int> v

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
    vec(n);
    read(v,n);
    int cnt2 = count(v.begin(),v.end(),2);
    int i = 0;
    if(cnt2 == 0){
        cout<<1<<endl;
        return;
    }
    if(cnt2%2!=0){
        cout<<-1<<endl;
        return;
    }else{
        int end = cnt2/2;
        
        while(i<n && end>0){
            if(v[i]==2) end--;
            i++;
        }
    }
    cout<<i<<endl;
    return;
}