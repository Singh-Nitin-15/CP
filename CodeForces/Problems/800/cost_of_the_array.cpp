#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 int n,k;
 cin>>n>>k;
 vector<int> a(n);
 for(int i = 0; i<n; i++){
    cin>>a.at(i);
 }
 if(n == k){
    int ans = 1;
    for (int i = 1; i < n; i += 2)
    {
        if(a[i] == ans) ans++;
        else break;
    }
    cout<<ans<<endl;
 }else{
    bool bn = true;
    for (int i = 1; i < n-k+2; i++)
    {
        if(a[i] != 1){
            cout<<"1"<<endl;
            bn = false;
            break;
        }
    }
    if(bn){
        cout<<"2"<<endl;
    }
 }
}
return 0;
}