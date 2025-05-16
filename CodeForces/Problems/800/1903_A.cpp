#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve();

void inputArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
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
        int arr[n];
        inputArray(arr,n);
        bool flag = false;
        if(is_sorted(arr,arr+n)){
            flag = true;
        }
        if(k==1 && flag == false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        return;
}