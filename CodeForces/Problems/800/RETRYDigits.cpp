#include<iostream>
using namespace std;

int fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * fact(n-1);
}
int main()
{
int t;
cin>>t;

while(t--){
    int n,d;
    cin>>n>>d;
    int value = 0;
    int pow =1;
    for(int i = 0; i<fact(n); i++){
     value += d * pow;
     pow = pow * 10;
    }
    cout<<value<<" "<<pow<<endl;
    for(int i = 1; i<=9; i=i+2){
        if(value%i==0){
            cout<<i<<" ";
        }
    }
}
 return 0;
}