#include<iostream>
using namespace std;
int main()
{
int n = 5;
int arr[5][5];
int p =-1,q=-1;
for(int i = 0; i<n; i++){
   for(int j = 0; j<n; j++){
    cin>>arr[i][j];
    if(arr[i][j] == 1){
        p = i, q=j;
    }
   }
} int count = 0;
while( p!=2 || q!=2){
   if(p>2){
      p--;
      count++;
   }else if(p<2){
      p++;
      count++;
   }
   if(q>2){
      q--;
      count++;
   }else if(q<2){
      q++;
      count++;
   }
   }
   cout<<count<<endl;
   return 0;
}