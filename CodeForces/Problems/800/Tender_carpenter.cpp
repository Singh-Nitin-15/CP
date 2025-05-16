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
    int x,y;
    bool possible = false;
    for(int i = 0; i<n-1; i++){
        x = a[i];
        y = a[i+1];
            if(2*x>y && 2*y>x){
                possible = true;
                cout<<"YES"<<endl;
                break;
            }
    }     
    if(possible == false){
        cout<<"NO"<<endl;
    }
 }
return 0;
}