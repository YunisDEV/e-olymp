#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>u;
    vector<pair<int,int>>v;
    long long n, m, l, f, j, s = 0, i, x, y, r;
    cin >> n;
    f = n;
    j = n;
    m = n * 2;
    for (i = 0; i < m; i++){
        cin >> x >> y;
        r = y - x;
        u.push_back(make_pair(r, x));
        v.push_back(make_pair(r, y));
    }
    
    sort(u.begin(), u.end());
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (i = 0; i < m; i++) {
        if (f == 0)
            break;
        s = s + u[i].second;
        f--;
    }
    for (i = 0; i < m; i++) {
        if (j == 0)
            break;
        s = s + v[i].second;
        j--;
    }
    cout << s;
    return 0;
}