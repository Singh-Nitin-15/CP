#include <iostream>
#include <queue>
#include <set>
#include <string>
using namespace std;

// Find all balanced prefix lengths
vector<int> getBalancedPrefixes(const string &s) {
    int count0 = 0, count1 = 0;
    vector<int> res;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '0') count0++;
        else count1++;
        if (count0 == count1) {
            res.push_back(i + 1); // balanced till index i
        }
    }
    return res;
}

string flipPrefix(const string &s, int x) {
    string flipped = s;
    for (int i = 0; i < x; ++i) {
        flipped[i] = (s[i] == '0' ? '1' : '0');
    }
    return flipped;
}

int countPossibleStrings(string s) {
    set<string> seen;
    queue<string> q;
    
    seen.insert(s);
    q.push(s);
    
    while (!q.empty()) {
        string current = q.front();
        q.pop();
        
        vector<int> prefixes = getBalancedPrefixes(current);
        for (int len : prefixes) {
            string next = flipPrefix(current, len);
            if (!seen.count(next)) {
                seen.insert(next);
                q.push(next);
            }
        }
    }
    return seen.size();
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        cout << countPossibleStrings(S) << endl;
    }
    return 0;
}
