#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(a[i]==a[j] && a[i]>=0 && a[j]>=0){
                count++;
                a[j]=-1;
                break;
            }
        }
    }
    cout<<count<<endl;
 }
return 0;
}