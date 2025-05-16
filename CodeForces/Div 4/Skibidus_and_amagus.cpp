#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string w;
cin>>w;
int len = w.size();
for(int i = 0; i<len-2;i++){
    cout<<w[i];
}
cout<<'i'<<endl;
}
return 0;
}