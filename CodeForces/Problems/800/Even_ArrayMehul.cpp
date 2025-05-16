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
    int even_count = 0;
    int even_inx = (n+1)/2;
    int count = 0;
    for(int i = 0; i<n; i++){
        if(a[i]%2 == 0){
            even_count++;
        }
    }
    if(even_count!=even_inx){
        cout<<-1<<endl;
    }
    else{
      for(int i = 0; i<n; i++){
        if( i%2 != a[i]%2){
           for(int j = i+1; j<n; j++){
            if( i%2 == a[j]%2 && j%2 != a[j]%2){
            swap(a[i],a[j]);
            count++;
            break;
        }
        }
        }
    }
    cout<<count<<endl;
    }  
 }
return 0;
}