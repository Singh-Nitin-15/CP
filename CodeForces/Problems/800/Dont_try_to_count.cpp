#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
    int n,m;
    cin>>n>>m;
    char x[n];
    cin>>x;
    string s;
    cin>>s;
    int len;
    char y[len];
    strcpy(y,x);
// condition
for(int i = 0; i<len-s.size(); i++){
    for(int j=i+1; j<j+s.size(); j++)
    strcat(y,x);
    len = 2*len;
    }
return 0;
}
}