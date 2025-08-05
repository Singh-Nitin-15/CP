#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;
        int one = 0, two = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] % 3 == 0) {
                found = true;
                break;
            } else if (a[i] % 3 == 1) {
                one++;
            } else if (a[i] % 3 == 2) {
                two++;
            }

            if (one == 3 || two == 3 || (one >= 1 && two >= 1)) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
