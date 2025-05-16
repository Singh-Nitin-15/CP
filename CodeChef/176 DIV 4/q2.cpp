#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 int x,y,z,a,b,c;
 cin>>x>>y>>z>>a>>b>>c;
 //   0  7  4  0  8  12
 int initalSum = a+b+c; // 25
 int ans = 0;
 // dealing with a first
 if(a>x){
    a = a-x; //2
    x=0;
    if(a>y){
        a=a-y;
        y=0;
        if(a>z){
            a=a-z;
            z=0;
        }
        else{
            z=z-a;
            a=0; 
        }
    }
    else{
        y = y-a;
        a = 0;   
    }
 }
 else{
    x = x-a;
    a = 0;
 } 

 // dealing with b
 if(a == 0){
    if(b>y){
        b = b-y;
        y=0;
        if(b>z){
            b=b-z;
            z=0;
        }
        else{
            z=z-b;
            b=0;
        }
    }
    else{
        y = y-b;
        b = 0;
    } 
 }

 // dealing with c
 if(b == 0){
    if(c>z){
        c = c-z;
        z=0;
    }
    else {
        z = z-c;
        c = 0;
    }
 }
 int finalSum = a+b+c;
 ans = initalSum - finalSum;
cout<<ans<<endl;
 
}
return 0;
}