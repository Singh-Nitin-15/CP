#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 int x,y,k;
 cin>>x>>y>>k;
 
 int count = 0;
 int larger = max(x,y);
 int smaller = min(x,y);
 int diff = abs(x-y);
 bool flag = true;
 while(diff != k){
    if(diff>k){
        larger--;
        smaller++;
        count++;
        diff = larger - smaller;
        // if not possible
        if(diff<k){
            flag = false;
            break;
        }
    }
    if(diff<k){
        larger++;
        smaller--;
        count++;
        diff = larger - smaller;
        // if not possible case
        if(diff>k){
            flag = false;
            break;
        }
    }
 }
 if(flag == true){
    cout<<count<<endl;
 }else{
    cout<<-1<<endl;
 }

}
return 0;
}