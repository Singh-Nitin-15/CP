#include<iostream>
using namespace std;
int main()
{
 long long n;
 cin>>n;
 n = abs(n);
 int count = 0;
if(n==0){
    cout<<"NO"<<endl;
    return 0;
}
while(n>0){
    int rem = 0;
    rem = n%10;
    if(rem == 4 || rem == 7){
      count++;
    }
    n = n/10;
}
if(count == 4 || count ==7){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}