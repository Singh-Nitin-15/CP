#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        int countOddA = 0;
        int countEvenA = 0;
        int countOddB = 0;
        int countEvenB = 0;
        
        for(int i = 0; i<n; i++){
            if(a[i] == '1' && i%2!=0) countOddA++;
            if(a[i] == '1' && i%2==0) countEvenA++;
            if(b[i] == '0' && i%2!=0) countOddB++;
            if(b[i] == '0' && i%2==0) countEvenB++;
        }
        if(countOddA == 0 && countEvenA ==0){
            cout<<"YES"<<endl;
            continue;
        }
        if(countOddA == countEvenB && countEvenA == countOddB){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}