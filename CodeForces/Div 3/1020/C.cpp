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
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    //array a input
    read(a,n);
    //array b input
    vector<int> b(n);
    read(b,n);
    int ptr1 = 0; 
    int ptr2 = 0;
    bool found = false;
    for(int i = 0; i<n; i++){
        if(b[i]!=-1){
            found = true; // other than -1 then output 1
            break;
        }
    }
    // all not -1
    if(found){
        // if two different sums found
        vector<int> sumCheck;
        for(int i = 0; i<n; i++){
            if(b[i]!=-1){
                sumCheck.push_back(a[i]+b[i]);
            }
        }
        bool flag = true;
        for(int i = 0; i<sumCheck.size()-1; i++){
            if(sumCheck[i] != sumCheck[i+1]){
                flag = false;
                break;
            }
        }
        int maxi = *max_element(a.begin(),a.end());
        if(sumCheck[0]<maxi || sumCheck[0]>k){
            cout<<0<<endl;
            return;
        }
        if(flag){
            cout<<1<<endl;
            return;
        }else{
            cout<<0<<endl;
        }
        // all -1
    }else{
        int mini = *min_element(a.begin(), a.end());
        int maxi = *max_element(a.begin(), a.end());
        ll minSum = maxi;
        ll maxSum = mini + k;
        ll ways = max(0LL, maxSum - minSum + 1);
        cout << ways << endl;
    }
    return;
}