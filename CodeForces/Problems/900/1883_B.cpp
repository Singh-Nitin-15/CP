#include<bits/stdc++.h>
using namespace std;

#define in(n) for (int i = 0; i < n; i++)


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
int t;
cin>>t;
while(t--){
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   int arr[26]= {0};
   //frequency array
   for(int i = 0; i<n; i++){
    char ch = s[i];
    arr[ch-'a']++;
   }
   //managing odd freq
   for(int i = 0; i<26; i++){
    if(k==0) break;
    if(arr[i]>0 && arr[i]%2!=0){
        arr[i]--;
        k--;
    }
   }

   // final touch
   int even = 0, odd =0, evenSum = 0, oddSum = 0;
   for(int i = 0; i<26; i++){
    if(arr[i]>0){
        if(arr[i]%2==0){
            even++;
            evenSum+=arr[i];
        }else{
            odd++;
            oddSum+=arr[i];
        }
    }
   }
   //now checking whether it can be palindrome or not
   if(odd>1){
    cout<<"NO"<<endl;
   }else if(k%2==0){
    if (evenSum >= k){
        cout<<("YES")<<endl;
    }else{
        cout<<("NO")<<endl;
    }
   }else {
    if (k >= oddSum){
        cout<<("YES")<<endl;
    }else{
        cout<<("NO")<<endl;
    }
}
}


return 0;
}