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
        bool check=true;
        for(int i = 0; i<n; i++){
            if(a[i]=='1' && i%2 != 0){
                bool flag  =false;
                for(int j=0; j<n; j=j+2){
                    if(b[j]=='0'){
                        flag =true;
                        swap(b[j],a[i]);
                        break;
                    }
                }
                if(flag == false){
                    cout<<"NO"<<endl;
                    check = false;
                    break;
                }
            }
            if(a[i]=='1' && i%2 == 0){
               bool flag2 = false;
                for(int j=1; j<n; j=j+2){
                    if(b[j]=='0'){
                        flag2 = true;
                        swap(b[j],a[i]);
                        break;
                    }
                }
                if(flag2 == false){
                    cout<<"NO"<<endl;
                    check = false;
                    break;
                }
            }
        }
        if(check == true){
            cout<<"YES"<<endl;
        }
}
return 0;
}