#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int T;
 cin>>T;
 while(T--){
    int N;
    cin>>N;
    int A[N];
    int largest = -1;
    for(int i = 0; i<N; i++){
        cin>>A[i];
        if(A[i]>largest){
            cout<<1<<" ";
            largest = A[i];
        }else{
            cout<<0<<" ";
        }
     
    }
    cout<<endl;
 }
return 0;
}