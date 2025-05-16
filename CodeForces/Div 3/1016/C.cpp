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
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
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
    ll x;
    int k;
    cin>>x>>k;
   
    // even
    if(x%2==0){
        cout<<"NO"<<endl;
        return;
    }
    //odd
        else{
            // special case
            if(x==1){
                if(k==2){
                    cout<<"YES"<<endl;
                    return;
                }else{
                    cout<<"NO"<<endl;
                    return;
                }
            }
            if(k==1 && isPrime(x)){
                cout<<"YES"<<endl;
                return;
            }else{
                cout<<"NO"<<endl;
                return;
            }

            if(k>1){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
        return; 
    }
