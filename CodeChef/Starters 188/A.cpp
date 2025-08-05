#include<bits/stdc++.h>
using namespace std;
int main()
{
 int r,b,p,q;
 cin>>r>>b>>p>>q;
 long long ans = max(r*p,b*q);
 cout<<ans<<endl;
return 0;
}