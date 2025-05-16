#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void destroy();
int main(){
    int t;
    cin>>t;
    while(t--){
        destroy();
    }
    return 0;
}
void destroy(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec.at(i);
    }
    int count=1,sum=0,num=1;
    for(int i=0;i<n-1;i++){
        sum=sum+vec.at(i);
        while(sum>num*num){
            num+=2;
        }
        if(sum==num*num){
            count++;
            num+=2;
        }
    }
    cout<<count<<endl;

}