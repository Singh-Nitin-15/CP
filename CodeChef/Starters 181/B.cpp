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
	    vector<int> v(n);
	    for(int i = 0; i<n; i++){
	        cin>>v[i];
	    }
	    int sum = 0;
	    for(int i = 0; i<n; i++){
	            sum += v[i]-1;
	    }
	    cout<<sum<<endl;
    return;
}