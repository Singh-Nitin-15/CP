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
    int n; cin>>n;
    if(n%4 != 0){
        cout<<-1<<endl;
        return;
    }
    //min
    int l = n; //40
    // original n for min = x
    int x = l; //40
    l = n/6; // 6
    x = x-6*l; // 4
    if(x==4){
        cout<<l+1<<endl;
    } 
    else{
         cout<<-1<<endl;
         return;
    }
    // max
    int r = n; //40
    int y = r; //40
    r = n/4; //10
    cout<<r<<endl;
    
    return;
}