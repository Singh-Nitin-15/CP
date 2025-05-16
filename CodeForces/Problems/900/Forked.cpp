#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
int t;
cin>>t;
while(t--){
 int a,b,X,Y,p,q;
 cin>>a>>b;
 //king
 cin>>X>>Y;
 //queen
 cin>>p>>q;
 int Arr1[2][8];
 int arr2[2][8];
 //king
 (Arr1[0][0]=X+a, Arr1[1][0]=Y+b), (Arr1[0][1]=X-a, Arr1[1][1]=Y-b), (Arr1[0][2]=X+a, Arr1[1][2]=Y-b), (Arr1[0][3]=X-a, Arr1[1][3]=Y+b);
 (Arr1[0][4]=X+b, Arr1[1][4]=Y+a), (Arr1[0][5]=X-b, Arr1[1][5]=Y-a), (Arr1[0][6]=X+b, Arr1[1][6]=Y-a), (Arr1[0][7]=X-b, Arr1[1][7]=Y+a);
 //queen
 (arr2[0][0]=p+a, arr2[1][0]=q+b), (arr2[0][1]=p-a, arr2[1][1]=q-b), (arr2[0][2]=p+a, arr2[1][2]=q-b), (arr2[0][3]=p-a, arr2[1][3]=q+b);
 (arr2[0][4]=p+b, arr2[1][4]=q+a), (arr2[0][5]=p-b, arr2[1][5]=q-a), (arr2[0][6]=p+b, arr2[1][6]=q-a), (arr2[0][7]=p-b, arr2[1][7]=q+a);
 int count = 0;
 int freq[8] = {0};
 for(int i = 0; i<8; i++){
    bool flag = false;
    for(int j = 0; j<8; j++){
        if((Arr1[0][i] == arr2[0][j]) && (Arr1[1][i] == arr2[1][j]) && freq[j] == 0){
            freq[j]++;
            flag = true;
        }
    }
    if(flag)
    count++;
 }
 cout<<count<<endl;
}
return 0;
}