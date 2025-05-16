#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void destroy();
void inputArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
}
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}
void inputVector(vector<int> *arr,int n){
    for(int i=0;i<n;i++){
        cin>>arr->at(i);
    }
}
void printVector(vector<int> *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr->at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        destroy();
    }
    return 0;
}
void destroy(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(arr[i][j]=='1'){
                int valid=0,up=1,left=1;
                for(int k=0;k<i;k++){
                    if(arr[k][j]=='0'){
                        up=0;
                    }
                }
                for(int k=0;k<j;k++){
                    if(arr[i][k]=='0'){
                        left=0;
                    }
                }
                valid=up+left;
                if(valid==0){
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
    cout<<"YES\n";
}