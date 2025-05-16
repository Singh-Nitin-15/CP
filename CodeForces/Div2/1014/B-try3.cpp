#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void destroy();
void inputArray(char *arr,int n){
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
     destroy();
}

}

void destroy(){
    float n;
    cin>>n;
    char a[int(n)],b[int(n)];
    inputArray(a,n);
    inputArray(b,n);
    int up=ceil(n/2),down=n-up,countUp=0,countDown=0;
    for(int i=0;i<n;i+=2){
        if(a[i]=='0'){
            countUp++;
        }
        if(b[i]=='0'){
            countDown++;
        }
    }
    for(int i=1;i<n;i+=2){
        if(a[i]=='0'){
            countDown++;
        }
        if(b[i]=='0'){
            countUp++;
        }
    }
    if(countUp>=up && countDown>=down){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
}