#include<bits/stdc++.h>
using namespace std;

vector<int> canSeePersonsCount(vector<int>& v){
    stack<int> st;
    int n = v.size();
    vector<int> ans(n);
    ans[n-1] = 0;
    st.push(v[n-1]);
    for(int i = n-2; i>=0; i--){
        int count = 0;
        //pop
        while(st.size()>0 && v[i]>st.top()){
            st.pop();
            count++;
        }
        if(st.size()!=0){
            count++;
        }
        //ans
        ans[i] = count;
        //push
        st.push(v[i]);
    }
    return ans;

}
int main()
{
 
return 0;
}