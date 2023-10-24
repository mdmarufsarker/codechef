// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/submit/CABS
// Language: cpp / go / c / python
// Date: 2022-09-08
// Difficulty Rating: 399

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);  cout.tie(NULL);

int t;
cin >> t;

while(t--) {
    int x, y;
    cin >> x >> y;

    if(x < y) cout << "FIRST" << endl;
    else if(x > y) cout << "SECOND" << endl;
    else cout << "ANY" << endl;
}

return 0;
}
