#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 int n,m;
 cin>>n>>m;
 int a[n];
 int b;
 for(int i = 0; i<n; i++){
    cin>>a[i];
 }
 cin>>b;
 if(n==1){
    cout<<"YES"<<endl;
    continue;
}

int count = 0;
 for(int i = 1; i<n-1; i++){
    count = 0;
    
    // n>1
    if(a[i]>a[i+1]){
         a[i] = b - a[i];
            if(a[i]>a[i+1]){
                count++;
        break;
    }else{ //a[i]<a[i+1]
        if(a[i-1]>a[i]){
            a[i-1] = b - a[i-1];
            if(a[i-1]>a[i]){
                count++;
                break;
            }
        }
    }
    }
 }
 if(count>=1){
    cout<<"YES"<<endl;
 }else{
    cout<<"NO"<<endl;
 }

}
return 0;
}