#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    long long n;
    cin>>n;
    int count = 1;
    long long x=n;
if(n>3){
    while(x>3){
        x=x/4;
        count = count * 2;
    }
    cout<<count<<endl;
}
else{
        cout<<1;
        cout<<endl;
    }
    
}
 return 0;
}