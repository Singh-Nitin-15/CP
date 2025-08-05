#include <bits/stdc++.h>
using namespace std;

int count(long long x) {
    int turns = 0;
    while (x > 1) {
        x = (x + 1) / 2; // Fouad moves to far half, so Mouf can only reduce it by about half
        turns++;
    }
    return turns;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;
        /* a = min(a,n-a+1);
           b = min(b,m-b+1);*/
        if(n%2==0){
             if(a>n/2+1) a = n-a+1;
            if(n!=n/2 || a!= n/2+1 ) n = 2*a;
        }else{
            if(a>(n+1)/2) a = n-a+1;
            if(a!=(n+1)/2) n = 2*a;

        }
        if(m%2==0){
            if(b>m/2+1) b = m-b+1;
            if(b!=m/2 || b!= m/2+1 ) m = 2*b;
           
        }else{
            if(b>(m+1)/2) b = m-b+1;
            if(b!=(m+1)/2) m = 2*b;
            
        }
        int ans = count(n) + count(m);
        cout <<ans<<endl;
    }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int countCuts(long long x) {
    int turns = 0;
    while (x > 1) {
        x = (x + 1) / 2;
        turns++;
    }
    return turns;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;

        // For rows
        long long topHalf = a;              // size if we keep top half
        long long bottomHalf = n - a + 1;  // size if we keep bottom half
        long long rowHalf = min(topHalf, bottomHalf) * 2;

        // For columns
        long long leftHalf = b;             // size if we keep left half
        long long rightHalf = m - b + 1;   // size if we keep right half
        long long colHalf = min(leftHalf, rightHalf) * 2;

        int ans = countCuts(rowHalf) + countCuts(colHalf);
        cout << ans << "\n";
    }
    return 0;
}*/
