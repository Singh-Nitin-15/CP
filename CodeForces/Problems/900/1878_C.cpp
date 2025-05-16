#include<iostream>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        ll k;
        ll x;
        cin>>n>>k>>x;
        ll minSum = (k*(k+1))/2;
        ll maxSum = ((k)*(2*n-k+1))/2;
        if(x>=minSum && x<=maxSum){
            cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}