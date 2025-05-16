#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
 //row_wise placement
 vector<vector<int>> v(n,vector<int>(m,0));
 for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j+=2){
        if(j <=m-1 && j+1<=m-1){
        v[i][j] = 6;
        v[i][j+1] = 6;
    }
    }
 }
 //column-wise placement
if(m%2 !=0){
    int k = 0;
    while(k<=n-1 && k+1<= n-1){  
    v[k][m-1] = 6;
    v[k+1][m-1] = 6; 
    k=k+2;
    }
}
int count = 0;
 for(int i = 0; i<n; i++){
    for(int j= 0; j<m; j++){
     if(v[i][j]==6){
        count++;
     }
    }
 }
 int ans = count/2 ;
 cout<<ans<<endl;
return 0;
}