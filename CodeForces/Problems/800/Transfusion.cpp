#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 long long int n;
 cin>>n;
 vector<int> v(n);
 for(int i = 0; i<v.size(); i++){
    cin>>v.at(i);
 }
 long long int evenSum = 0;
 long long int oddSum = 0;
 for(int i = 0; i<v.size(); i++){
    
    if(i%2 == 0){
     evenSum += v.at(i);
    }else{
        oddSum += v.at(i);
    }
 }
 int evenAvg = evenSum/((n+1)/2);
 int oddAvg = oddSum/(n/2);
 if(evenSum%((n+1)/2) == 0 && oddSum%(n/2) == 0 && evenAvg == oddAvg){
    cout<<"YES"<<endl;
 }else{
    cout<<"NO"<<endl;
 }
}
return 0;
}