#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n == 5){
    sort(s.begin(),s.end());
        if(s == "Timru" ){
        cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
 }
return 0;
}