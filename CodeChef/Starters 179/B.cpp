#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> h(n);
	    for(int i = 0; i<n; i++){
	        cin>>h[i];
	    }
	    int count = 0;
	    for(int i = 0; i<n-1; i++){
	        if(h[i]>=h[n-1]) count++;
	    }
	    int i = n-1;
	    int ans = 0;
	    while(i>0 && count>0){
	        if(h[i-1]>=h[i]) count--;
	        swap(h[i-1],h[i]);
	        ans++;
	        i--;
	    }
	    cout<<ans<<endl;
	}

	
}
