#include<iostream>
using namespace std;
int main()
{
 int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
        string A;
        cin>>A;
        string B;
        cin>>B;
	    int both = 0;
        int once = 0;
        for(int i = 0; i<N; i++){
            if(A[i] == '1' && B[i] == '1'){
                both++;
        }else if(A[i] == '1' && B[i] == 0 || A[i] == 0 && B[i] == 1){
            once++;
        }
        }
        if(both%2!= 0){
            cout<<"YES"<<endl;
        }else if(once  > 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}